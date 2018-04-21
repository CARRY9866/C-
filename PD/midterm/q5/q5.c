#include <stdio.h>
#include <stdbool.h>

	bool isPrime(int x)
	{	
		int i;

	
			if(x==2||x==3)return 1;
			if(x%2==0) return 0;
			for(i=3;i<x/2;i+=2)
				if(x%i==0)
					return 0;
			return 1;
		
	}

int main(){

	int x,i;
	while(scanf("%d",&x)!=EOF)
	{
		for(i=x;i>x/2;i--)
			if(isPrime(i))
			{
				printf("%d\n",i);
				break;
			}
	
	}

return 0;
}
