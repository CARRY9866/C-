#include<stdio.h>
#include<string.h>
int main(){
	
	char a[10],b[10];
	int N,i;
	while(scanf("%s",a)!=EOF)
	{
		N=strlen(a);
		for(i=0;i<N;i++)b[i]=a[N-1-i];
		for(i=0;i<N;i++)
			if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')b[i]='x';
		b[N]='\0';
		printf("%s\n",b);
	}
	
return 0;}
