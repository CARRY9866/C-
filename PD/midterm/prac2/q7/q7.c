#include<stdio.h>
#include<stdbool.h>
void BubbleSort(int x[],int N)
{
	int i,j,tmp ;
	for(i=N-1;i>0;i--)
	{
		bool flag=0;
		for(j=0;j<i;j++)
		{
			if(x[j]>x[j+1])
			{
				tmp=x[j];
				x[j]=x[j+1];
				x[j+1]=tmp;
				flag=1;
			}
		}
		if(!flag)break;
	}
}
int main(){
	
	int num[50],x,N=0;
	while(scanf("%d",&num[N])!=EOF)
		N++;

	BubbleSort(num,N);
	for(x=0;x<N;x++)
		printf("%d\n",num[x]);
return 0;
}
