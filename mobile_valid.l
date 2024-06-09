%{
    #include<stdio.h>
%}

%%
^[1-9][0-9]*{9}$ {printf("Valid mobile no.");}
.* {printf("Wrong Input");}
%%

int main()
{
    printf("Enter the number: ");
    yylex();
}

int yywrap()
{
    return 1;
}