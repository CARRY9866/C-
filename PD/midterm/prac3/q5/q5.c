#include<stdio.h>
#include<stdbool.h>

double mysqrt(int n){
	double low,mid,high;
	low=1;high=n;

	while(high-low>0.1)
	{
		mid =(low+high)/2;
		if(mid*mid>n)
			high=mid;
		else
			low=mid;
	
	}return low+0.5;

}

bool isPrime(int n){
	int i;
	if(n>2&&n%2==0)
		return 0;
	for(i=3;i<mysqrt(n);i+=2)
		if(n%i==0)return 0;
	return 1;

}


int main(){

	int n,i;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=n;i>1;i--)
			if(isPrime(i))
			{
				printf("%d\n",i);
				break;
			}
	
	}


return 0;}
