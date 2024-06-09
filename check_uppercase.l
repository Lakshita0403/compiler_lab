%{
#include<stdio.h>
%}
%%

[a-z]* {printf("lowercase");}
[A-Z] {printf("Uppercase");}
[A-Z a-z]+ {printf("Mix characters");}
[0-9]+ {printf("number");}
.* {printf("Invalid input");}
%%

int main()
{
printf("Enter Input: ");
yylex();
}

int yywrap()
{
return 1;
}


