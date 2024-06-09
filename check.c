#include <stdio.h>
#include <string.h>
int main()
{
    char word[] = "break";
    char arr[32][10] = {"if", "else", "for", "while"};
    int i;
    /*
    char s[]="if";
    for ( i = 0; i < 4; i++)
    {
        printf("\n array elements are: %s",arr[i]);
        printf("\n");
        if(strcmp(s,arr[i])==0){
            printf("%s is keyword",s);
        }
        else{
            printf("%s is not keyword",s);
        }
    }
    */

    int flag = 0;
    for (i = 0; i < 4; i++)
    {
        if (strcmp (word, arr[i]) == 0)
        {
            flag = 0;
            break;
        }
    
        else
        {
            flag = 1;
        }
    }
        if (flag == 0)
        {
            printf("%s is a keyword\n", word);
        }
        else
        {
            printf("%s is not a keyword\n", word);
        }
    
    }