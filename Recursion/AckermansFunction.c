#include<stdio.h>
//This code show the Ackerman's Function of recursion version
int Ack(int m,int n)
{
    if(m==0)return n+1;
    if(n==0)return Ack(m-1,1);
    return Ack(m-1,Ack(m,n-1));
}

int main(){

    while(1)
    {
        int m,n;
        printf("Please input two numbers to calculate the Ackerman's value :");
        scanf("%d%d",&m,&n);
        printf("The vale of \"Ackerman(%d,%d)\" is %d \n",m,n,Ack(m,n));
    }

    return 0;
}