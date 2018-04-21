#include<stdio.h>
int main(){

	int space=0,line=0,en=0,digit=0;
	char x;
	while((x=getchar())!=EOF)
	{
		if(x==' '||x=='\t')space++;
		if(x=='\n')line++;
		if((x>=65&&x<=90)||(x>=97&&x<=122))en++;
		if(x>=48&&x<=57)digit++;
	}

		printf("Space count: %d\n",space);
		printf("Line count: %d\n",line);
		printf("English count: %d\n",en);
		printf("Digit count: %d\n",digit);	



return 0;}
