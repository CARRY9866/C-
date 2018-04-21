#include<stdio.h>
#include<string.h>
int main(){
	
	char s1[10];
	char s2[10];
	int x,n;
	while(scanf("%s",s1)!=EOF)
	{
		n =strlen(s1);
		for(x=0;x<n;x++)
		{
			s2[x]=s1[n-1-x];
			if(s2[x]=='a'||s2[x]=='e'||s2[x]=='i'||s2[x]=='o'||s2[x]=='u')s2[x]='x';
		}
		s2[x]='\0';
		printf("%s\n",s2);
	}



return 0;
}
