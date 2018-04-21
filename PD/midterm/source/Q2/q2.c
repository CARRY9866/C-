#include<stdio.h>

int main()
{
	char c;
	int space=0,line=0,english=0,digit=0;
	
	while((c=getchar())!=EOF)
	{
		if(c==' ' || c=='\t')
			space++;
		else if(c=='\n')
			line++;
		else if((c>=65 && c<=90) || (c>=97 && c<=122))
			english++;
		else if(c>=48 && c<=57)
			digit++;
	}
	
	printf("Space count: %d\n",space);
	printf("Line count: %d\n",line);
	printf("English count: %d\n",english);
	printf("Digit count: %d\n",digit);
	
	return 0;		
}
