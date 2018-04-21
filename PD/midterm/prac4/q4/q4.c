#include<stdio.h>
#define size 1000
int main(){
	
	void reverse(char *B,int N)
	{	
		int i;
		for(i=0;i<N/2;i++)
		{	
			char tmp = B[i];
			B[i]=B[N-1-i];
			B[N-1-i]=tmp;
		}
		
		for(i=0;i<N;i++)
			if(B[i]=='a'||B[i]=='e'||B[i]=='i'||B[i]=='o'||B[i]=='u')
				B[i]='x';
		B[N]='\0';
	}
	int N=0;
	char c, B[size];
	while((c=getchar())!=EOF)
	{
		if(c!='\n')
		{
			B[N]=c;
			N++;
		}
		if(c=='\n')
		{
			reverse(B,N);
			printf("%s\n",B);
			N=0;
		}
	}
	

return 0;}
