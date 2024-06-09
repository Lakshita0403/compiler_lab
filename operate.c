#include<stdio.h>
#include<string.h>
int isKeyword(char word[]){
    char keywords[32][10]={"+","-","*","/"};
    for (int i = 0; i < 32; i++)
    {
        if (strcmp(keywords[i],word)==0)
        {
            return 1;
        }
        
    }
    return 0;
    
}
int main(){
    char filename[100];
    char word[20];
    int count=0;
    printf("Enter  the filename:  ");
    scanf("%s",filename);
    FILE *file;
    file=fopen(filename,"r");
    if(file==NULL)
    {
        printf("error");
        return 1;
    }
    while(fscanf(file,"%s",word)!=EOF)
    {
        if (isKeyword(word))
        {
            count++;
            printf("%s\n",word);
        }
    }
    fclose(file);
    printf("Total no. of operators %d",count);
    return 0;    
}