

%{
#include <stdio.h>
%}

%%

(0[1-9]|1[0-2])[:](0[1-9]|[1-2][0-9]|3[0-1])[:][1-9][0-9]{3} { printf("Valid date\n"); }
.* { printf("Invalid date\n"); }

%%

int main() {
    printf("Enter a date (MM/DD/YYYY): ");
    yylex();
    return 0;
}

int yywrap() {
    return 1;
}

