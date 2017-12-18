#include<stdio.h>
//This code show the Fabonacci of recursion version
int Fabonacci(int n)
{
    if(n==0||n==1)return n;
    return Fabonacci(n-1) + Fabonacci(n-2);
}

int main(){
    while(1)
    {   
        int n;
        printf("Please input a num:");
        scanf("%d",&n);
        int r=Fabonacci(n);
        printf("\nThe value of \"Fabonacci(%d)\" is %d\n",n,r);

    }

    return 0;
}