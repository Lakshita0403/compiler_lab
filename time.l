%{
#include<stdio.h>
%}

%%
([0-1][0-9]|[2][0-4])[:]([0-5][0-9]|[6][0])[:]([0-5][0-9]|[6][0]) {printf("valid time");}
.* {printf("invalid time");}
%%

int main()
{
    printf("Enter time: ");
    yylex();

}

int yywrap()
{
    return 1;
}