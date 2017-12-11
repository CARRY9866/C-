#include<stdio.h>
#define size 2500

void swap(int *a,int *b)
{
	int tmp = *a;
	*a=*b;
	*b=tmp;
}

void bs(int *B,int l,int r)
{
	int i,j,flag;
	for(i=0;i<r-l+1;i++)
	{	
		flag=0;
		for(j=l;j<r-i;j++)
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

	int B[size],N,i;
	while(scanf("%d",&B[N])!=EOF)N++;
	bs(B,0,N-1);
	for(i=0;i<N;i++)printf("%d\n",B[i]);

return 0;}
