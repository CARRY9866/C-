#include<stdio.h>

void swap(int *a,int*b)
{
	int tmp = *a;
	*a=*b;
	*b=tmp;
}
void bsort(int *B,int N)
{
	int i,j,flag;
	for(i=0;i<N-1;i++)
	{	
		flag=0;
		for(j=0;j<N-1-i;j++)
		{	
			if(B[j]>B[j+1])
			{
				swap(&B[j],&B[j+1]);
				flag=1;
			}
		}
		if(!flag)break;
	}
}

int main(){
	int i,N=0,B[50];
	while(scanf("%d",&B[N])!=EOF)N++;
	bsort(B,N);
	for(i=0;i<N;i++)
		printf("%d\n",B[i]);
return 0;}
