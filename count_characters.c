#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ilu;
    char charac, f[100], ch;
    int count = 0;
    printf("Enter filename: \n");
    scanf("%s", f);
    ilu = fopen(f, "r");
    if (!ilu)
    {
        printf("Error in file\n");
        exit(1);
    }

    printf("Enter character:\n");
    scanf("%s", &ch);
    do
    {
        charac = fgetc(ilu);
        if (charac == ch)
            count++;
    }

    while (charac != EOF);
    fclose(ilu);
    printf("character repeats at %d times\n", count);
    return 0;
}