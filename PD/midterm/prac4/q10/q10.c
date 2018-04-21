#include<stdio.h>

int gcd(int x,int y)
{
	int d;
	while((d=x%y)!=0)
	{
		x=y;
		y=d;
	}
	return y;
}

int main(){

	int x ,y;
	while(scanf("%d%d",&x,&y)!=EOF)
	{
		printf("%d\n",gcd(x,y));	
		printf("%d\n",x*y/gcd(x,y));
	}

return 0;
}
