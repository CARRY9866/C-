#include<stdio.h>
#include<string.h>
int main(){

	char x ;
	int cspace=0, cline=0, cenglish=0, cdigit=0;
	while((x=getchar())!=EOF)
	{
		if(x==' '||x=='\t')
			cspace++;
		if(x=='\n')
			cline++;
		if((x>=65&&x<=90)||(x>=97&&x<=122))
			cenglish++;
		if(x>=48&&x<=57)
			cdigit++;
	
	}

	printf("Space count: %d\n",cspace);
	printf("Line count: %d\n",cline);
	printf("English count: %d\n",cenglish);
	printf("Digit count: %d\n",cdigit);


return 0;
}
