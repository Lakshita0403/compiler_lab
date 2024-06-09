%{
#include<stdio.h>
%}

%%
^("http"|"https")("://www.")[A-z0-9?=%]*(".com"|".in")$ {printf("valid url");}
.* {printf("Wrong url");}
%%

int main()
{
    printf("Enter input: ");
    yylex();

}

int yywrap()
{
    return 1;
}