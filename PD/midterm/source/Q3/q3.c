#include<stdio.h>

int main()
{
	int input=0,number=0,pass=0,max=0,min=100;
	float avg,count=0;
	
	while(scanf("%d",&input)!=EOF)
	{
		if(input>=0 && input<=100)
		{
			number++;
			count=count+input;
			if(input>=60)
				pass++;
			if(input>max)
				max=input;
			if(input<min)
				min=input;
		}
	}

	if(number!=0)
		avg=count/number;
	else
		avg=0;

	printf("Average: %.2f\n",avg);
	printf("Passed: %d\n",pass);
	printf("Max: %d\n",max);
	printf("Min: %d\n",min);
	
	return 0;		
}
