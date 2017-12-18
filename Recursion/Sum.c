#include<stdio.h>
#include<time.h>
//This code show the Sum of Recursion version

int Sum(int n)
{
    if(n==0)return 0;
    return n+Sum(n-1);
}

int main(){

    while(1)
    {   
        int n;
        printf("Please input a num: ");
        scanf("%d",&n);
        clock_t begin = clock();
        int r=Sum(n);
        clock_t end = clock();
        printf("The value of \"sum of 1 to %d\" is %d \n",n,r);
        printf("Time spent:%.6f\n",(double)(end-begin)/CLOCKS_PER_SEC); 
    }

    return 0;
}