#include<stdio.h>
int main(){

		char *h="hello";//5
		printf("%s\n",h);
		printf("%c\n",h[1]);//e
		printf("%s\n",h+2);//llo

		int a[6]={2,1,15,3,4,5};
		printf("%x\n",a[1]);
		int *p=a;
		int i;
		for(i=0;i<15;i++)
		{
		 printf("%p\n",p+i);
		 printf("%d\n",*(p+i));
		}
return 0;}
