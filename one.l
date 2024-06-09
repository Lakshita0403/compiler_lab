%{
#include<stdio.h>
%}
%%
"Radhe" {printf("Krishna");}
.* {printf("Wrong Input");}
%%
int main()
{
printf("Input: ");
yylex();
}
int yywrap()
{
return 1;
}
