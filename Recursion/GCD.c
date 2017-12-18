#include<stdio.h>
//This code show the GCD of recursion version
int GCD(int A,int B)
{
    if(A%B==0)return B;
    return GCD(B,A%B);
}

int main(){

    while(1)
    {
        int A,B;
        printf("Please input two number to cal thier GCD:");
        scanf("%d%d",&A,&B);
        printf("The GCD is %d\n",GCD(A,B));
    }
    return 0;
}