#include<stdio.h>
#include<time.h>
#define size 20000

void BubbleSort(int *B,int N){


	int i,j;

	/*printf("pass0: ");
	for(i=0;i<N;i++)
		printf("%d ",B[i]);
	printf("\n");*/

	for(i=N-1;i>0;i--)
	{
		int flag=0;
		for(j=0;j<i;j++)
		{
			if(B[j]>B[j+1])
			{
				int tmp=B[j];
				B[j]=B[j+1];
				B[j+1]=tmp;
				flag=1;
			}
		}
		if(flag==0)break;
		/*printf("pass%d: ",N-i);
		for(j=0;j<N;j++)
			printf("%d ",B[j]);
		printf("\n");*/
	}


}


int main(){

	clock_t begin = clock();

	int B[size] , N=0,i;
	while(scanf("%d",&B[N])!=EOF)
		N++;
	BubbleSort(B,N);
	
	for(i=0;i<N;i++)
		printf("%d\n",B[i]);

	clock_t end = clock();
	double time_spent = (double)(end-begin)/CLOCKS_PER_SEC;
	printf("Time: %.6f\n",time_spent);

return 0;
}
