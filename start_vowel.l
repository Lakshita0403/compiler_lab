%{
    #include<stdio.h>
%}

%%
^[AEIOU aeiou][A-z]* {printf("Starts with vowel");}
[A-Z a-z]* {printf("Start with consonant");}
.* {printf("Wrong Input");}
%%

int main()
{
    printf("Enter the word: ");
    yylex();
}

int yywrap()
{
    return 1;
}