#include<stdio.h>
#include<stdlib.h>
int main(){

    int a[5];
    int i;
    for(i=0;i<5;i++)
        a[i]=5-i;
    int *p=a;
    printf("%d\n",*p);//5
    printf("%d\n",*p++);  //5
    printf("%d\n",*++p);  //3
    printf("%d\n",++*p);  //4
    printf("%d\n",(*p)++);//4
    printf("%d\n",*--p);  //4
    
    
    for(i=0;i<5;i++)
    {
        printf("%x\n",a+i);
        char b[24];
        int c=(int)(a+i);
        itoa(c,b,2);
        printf("%s\n",b);
    }
    return 0;
}