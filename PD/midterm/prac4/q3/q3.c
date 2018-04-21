#include<stdio.h>
int main(){
	
	int x,sum=0,N=0,pass=0,max=0,min=100;
	while(scanf("%d",&x)!=EOF)
	{
		if(x<=100&&x>=0)
		{
			N++;
			sum+=x;
	    	if(x>=60)pass++;
			if(x>max)max=x;
			if(x<min)min=x;
		}
	}	

	printf("Average: %.2f\n",sum*1.0/N);
	printf("Passed: %d\n",pass);
	printf("Max: %d\n",max);
	printf("Min: %d\n",min);
return 0;
}
