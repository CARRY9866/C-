#include<stdio.h>

struct test{
	int n;
	char b;
	struct test *ptr;
};

int main(){

	struct test a ;
	printf("sizeof:%zu\n",sizeof(a));

return 0;}
