#include<stdio.h>
#include<stdbool.h>

double  mysqrt(long long int x){
	double low , mid , high ;
	low=1;
	high=x;

	while(high-low>0.1)
	{
		mid=(high+low)/2;
		if(mid*mid>x){
			high=mid;
		}else{
			low=mid;
		}
	}
	return (low+0.5);
}

bool isPrime(long long int  x){
	long long int i;
	if(x%2==0 && x>2)
		return 0;
	for(i=3;i<mysqrt(x);i+=2)
		if(x%i==0)
			return 0;
	return 1;

}


int main()
{
	long long int x,i;
	while(scanf("%lld",&x)!=EOF)
	{
		long long int  maxp;
		for(i=x;i>x/2;i--)
			if(isPrime(i))
			{
				maxp=i;
				break;
			}
		printf("%lld\n",maxp);
	}


return 0;
}
