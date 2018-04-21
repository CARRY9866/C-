#include<stdio.h>

int main(){

	int score[1000], x ,i=0 ;
	while(scanf("%d",&x)!=EOF)
	{
		score[i]=x;
		i++;
	}

	const int stdnum = i;

	float avg =0;
	int sum =0;
	int pass = 0;
	int mm[2]={score[0],score[0]};

	for(i=0;i<stdnum;i++)
	{
		sum = sum + score[i];

		if(score[i]>=60)
			pass++;

		if(mm[0]<score[i])
			mm[0]=score[i];
		
		if(mm[1]>score[i])
			mm[1]=score[i];
	}
	avg = sum*1.0/stdnum;

	
	printf("Average: %.2f\n",avg);
	printf("Passed: %d\n",pass);
	printf("Max: %d\n",mm[0]);
	printf("Min: %d\n",mm[1]);



return 0;
}
