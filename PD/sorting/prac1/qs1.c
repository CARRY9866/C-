#include<stdio.h>
#include<time.h>
#define size 2000000
void swap(int *a,int *b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

void qs(int *B,int left,int right)
{
	int i,j;
	if(left<right)
	{
		i=left;
	 	j=right+1;
		do{
			do i++;while(B[i]<B[left]);
			do j--;while(B[j]>B[left]);
			if(i<j)swap(&B[i],&B[j]);
		}while(i<j);
		swap(&B[left],&B[j]);
		qs(B,left,j-1);
		qs(B,j+1,right);
	}	
}
int main(){
	clock_t begin=clock();
	int B[size],N=0,i;
	while(scanf("%d",&B[N])!=EOF)N++;
	qs(B,0,N-1);
	for(i=0;i<N;i++)printf("%d\n",B[i]);
	clock_t end=clock();
	double time_spent=(double)(end-begin)/CLOCKS_PER_SEC;
	printf("Time: %.6f\n",time_spent);
return 0;}
