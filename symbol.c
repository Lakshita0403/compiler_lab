#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void main()
{
	int i = 0,j=0,x=0, n;
	void *p, *add[5];
	char ch, srch, b[15], d[15], c;-
	printf("Expression terminolgy by $: ");
		while((c=getchar()) != '$')
			{
				b[i] = c;
				i++;
			}
			n = i-1;
			printf("Given Expression: ");
			i = 0;
		while(i<=n)
		{
			printf("%c", b[i]);
			i++;
		}
		printf("\n Symbol table\n");
		printf("Symbol \t Address \t Type"); 

		while(j<=n)
	{
			c = b[j];
			if(isalpha(toascii(c)))
		{
			p = malloc(c);
			add[x] = p;
			d[x] = c;
			printf("\n %c\t\t %d\t identifier \n", c, p);
			x++;
			j++;
		}
			else
		{
			ch = c;
				if(ch=='+'||ch=='-'||ch=='*'||ch=='=')
				{
					p = malloc(ch);
					add[x] = p;
					d[x] = ch;
					printf("\n %c\t\t %d\t operators \n", ch, p);
					x++;
					j++;
				}
		}
	}
}