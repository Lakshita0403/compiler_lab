#include <stdio.h>
#include <stdlib.h>

void main()
{
   FILE *fp;
   fp = fopen("a.txt", "a");
   fprintf(fp, "Radha Krishna is love\n");
   printf("Data is written");
   fclose(fp);
}