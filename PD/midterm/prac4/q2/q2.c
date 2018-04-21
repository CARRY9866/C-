#include<stdio.h>
int main(){
	
	int space=0,line=0,en=0,digit=0;
	char c;
	while((c=getchar())!=EOF)
	{
		if(c=='\t'||c==' ')space++;
		if(c=='\n')line++;
		if((c>=65&&c<=90)||(c>=97&&c<=122))en++;
		if(c>=48&&c<=57)digit++;
	}
	printf("Space count: %d\n",space);
	printf("Line count: %d\n",line);
	printf("English count: %d\n",en);
	printf("Digit count: %d\n",digit);


return 0;
}
