#include<stdio.h>
//This code show Factorial of Iterative version
int main(){

    while(1)
    {
        int n,f=1,i;
        printf("Please input a num: ");
        scanf("%d",&n);
        for(i=n;i>0;i--)f=f*i;
        printf("The value of \"%d!\" is %d\n",n,f);
    }
    return 0;
}