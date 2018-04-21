#include<stdio.h>

int mysqrt(int x)
{
	int low=0,high=x,mid;
	while(high-low>1)
	{
		mid=(low+high)/2;
		(mid*mid>x)?(high=mid):(low=mid);
	}
	return low;
}

int isPrime(int x)
{
	int i;
	if(x==2||x==3)return 1;
	if(x%2==0)return 0;
	for(i=3;i<=mysqrt(x);i+=2)
		if(x%i==0)return 0;
	return 1;
}

int main(){
	
	int x,i;
	while(scanf("%d",&x)!=EOF)
	{
		if(x>=2&&x<=10000)
		{
			for(i=x;i>0;i--)
				if(isPrime(i))
				{	
					printf("%d\n",i);
					break;
				}
		}
		
	}



return 0;}
