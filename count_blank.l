%{
#include<stdio.h>
int count_s=0;
int count_l=0;
int count_w=0;
%}

%%
[\n] {count_l++;}
[\t] {count_s++;}
[]+ {count_s++;}
[^\n\t]+ {count_w++;}

.* {printf("Wrong Input");}
%%

int main()
{
    printf("Enter input: ");
    yylex();

printf("Number of lines: %d\n", count_l);

printf("Number of words: %d\n", count_w);

printf("Number of space: %d\n", count_s);
return 0;
}

int yywrap()
{
    return 1;
}