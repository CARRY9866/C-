#include<stdio.h>
//This code show the Fabonacci of iterative version

int Fibonacci(int n)
{
    if(n==0||n==1)return n;
    int i,a=0,b=1,c;
        for(i=2;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
    return c;

}

int main(){

    while(1)
    {
        int n;
        printf("Please input a num:");
        scanf("%d",&n);
        int r=Fibonacci(n);
        printf("\nThe value of \"Fabonacci(%d)\" is %d\n",n,r);


    }

    return 0;
}