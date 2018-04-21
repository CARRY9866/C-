#include<stdio.h>
#include<string.h>

int main()
{

	int A[5];
	int *p;
	int i;

	for(i=0;i<5;i++)  //initialization
	{
		A[i]=5-i;	
	}

	p=A;

	printf("%d\n",*p);    // 5==A[0] ,p==A[0]==5

	printf("%p\n",p);
	printf("%d\n",*p++);  // 5==A[0] ,p==A[1]==4 已往下一格去
	printf("%p\n",p);

	printf("%d\n",*++p);  // 3==A[2] ,p==A[2]==3
	printf("%d\n",++*p);  // 4==A[2] ,p==A[2]==4
	printf("%d\n",(*p)++);// 4==A[2] ,p==A[2]==5
	printf("%d\n",*--p);  // 4==A[1] ,p==A[1]==4


	return 0;

}
