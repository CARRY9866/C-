#include<stdio.h>
//This code show Factorial of recursion version

int Factorial(int n)
{
    if(n==0||n==1)return 1;
    return n*Factorial(n-1);
}

int main(){
    int n;
    while(1)
    {
        printf("Please input a num:");
        scanf("%d",&n);
        int r=Factorial(n);
        printf("\nThe value of \"%d!\" is %d\n",n,r);
    }

    return 0;
}