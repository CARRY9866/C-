#include<stdio.h>
#include<time.h>
#define size 2095406 

void bs(int *B,int N)
{
	int i,j;
	for(i=0;i<N-1;i++)
	{
		int flag=0;
		for(j=0;j<N-1-i;j++)
		{
			if(B[j]>B[j+1])
			{
				int tmp=B[j];
				B[j]=B[j+1];
				B[j+1]=tmp;
				flag=1;
			}
		}
		if(!flag)break;
	}

}

int main(){
	
	clock_t begin = clock();
	int B[size],N=0,i;
	while(scanf("%d",&B[N])!=EOF)N++;	
	bs(B,N);
	for(i=0;i<N;i++)printf("%d\n",B[i]);
	clock_t end = clock();
	double time_spent = (double)(end-begin)/CLOCKS_PER_SEC;
	printf("Time: %.6f\n",time_spent);

return 0;}
