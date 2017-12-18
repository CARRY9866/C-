#include<stdio.h>
//This code show Binomial Cofficient of recursion version

int Bin(int n,int m)
{
    if(m==0||m==n)return 1;
    return Bin(n-1,m) + Bin(n-1,m-1);
}

int main(){

    while(1)
    {
        int n,m;
        printf("Please input the value of \"n\":");
        scanf("%d",&n);
        printf("Please input the value of \"m\":");
        scanf("%d",&m);
        int r=Bin(n,m);
        printf("The value of \"Bin(n,m)\" is %d\n",r);
    }



    return 0;
}