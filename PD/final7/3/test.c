#include<stdio.h>
#define size 1001
void removed(char *B)
{
	int n=0,i;
	while(B[n]!='\n')n++;
	//
	for(i=n-1;i>=0;i--)
		if(B[i]==' '||B[i]=='\t')B[i]='\0';
		else break;
	n=i+1;
	//
	int s=0;
	while(B[s]==' '||B[s]=='\t')s++;
	for(i=s;i<n;i++)
		B[i-s]=B[i];
	n=n-s;
	B[n]='\0';
}
int main(){

	char B[size];
	while(fgets(B,size,stdin))
	{
		removed(B);
		puts(B);
	}

return 0;}
