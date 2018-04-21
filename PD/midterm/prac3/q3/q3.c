#include<stdio.h>
int main(){

	float avg;
	int sum=0,count=0,pass=0,max=0,min=100,x;
	while(scanf("%d",&x)!=EOF)
	{
		count++;
		sum = sum +x;
		if(x>=60)pass++;
		if(x>max)max=x;
		if(x<min)min=x;
	}
	avg = sum*1.0/count;
	printf("Average: %.2f\n",avg);
	printf("Passed: %d\n",pass);
	printf("Max: %d\n",max);
	printf("Min: %d\n",min);


return 0;}
