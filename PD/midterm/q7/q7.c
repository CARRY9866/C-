#include<stdio.h>
#include<stdbool.h>

void BubbleSort(int num[],int N){
	
	int i , j , tmp;
	for(i=N-1;i>0;i--)
	{	
		bool flag = 1;
		for(j=0;j<i;j++)
		{
			if(num[j]>num[j+1])
			{	tmp=num[j];
				num[j]=num[j+1];
				num[j+1]=tmp;
				flag=0;
			}
		}
		if(flag)
			break;
	}
	
}



int main(void){

	int num[50],i,N=0;
	while(scanf("%d",&num[N])!=EOF)
			N++;
	BubbleSort(num,N);	

	for(i=0;i<N;i++)
		printf("%d\n",num[i]);

return 0;
}
