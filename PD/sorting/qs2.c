#include<stdio.h>
#include<time.h>
#define size 2095410

void swap(int *a,int *b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}

void quicksort(int *B,int left,int right){
	
	int pivot , i ,j;

	if(left<right)
	{	
		pivot = B[left];
		i=left;
		j=right+1;

		do{
			do{i++;}while(B[i]<pivot);
			do{j--;}while(B[j]>pivot);
			if(i<j)swap(&B[i],&B[j]);
		}while(i<j);
	
		swap(&B[left],&B[j]);
		quicksort(B,left,j-1);
		quicksort(B,j+1,right);
	}
}



int main(){
	
	clock_t begin = clock(); 
	int B[size],N=0,i;

	while((scanf("%d",&B[N]))!=EOF)
		N++;
	
	quicksort(B,0,N-1);

	for(i=0;i<N;i++)
		printf("%d\n",B[i]);
	clock_t end = clock();	
	double time_spent = (double)(end-begin)/CLOCKS_PER_SEC;
	printf("Time: %.6f\n",time_spent);
	


return 0;}
