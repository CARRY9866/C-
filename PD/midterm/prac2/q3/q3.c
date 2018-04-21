#include<stdio.h>
int main(){

	int sum=0 , pass=0 , max=0 , min=100 , x , c=0;
	while(scanf("%d",&x)!=EOF)
	{
		if(x>=0&&x<=100)
		{
			c++;
			sum = sum +x;
			if(x>=60)pass++;
			if(x>max)max=x;
			if(x<min)min=x;
		}
	}
	
	float avg;
	if(c!=0)avg = sum*1.0/c;
	else avg=0;

	printf("Average: %.2f\n",avg);
	printf("Passed: %d\n",pass);
	printf("Max: %d\n",max);
	printf("Min: %d\n",min);

return 0;
}
