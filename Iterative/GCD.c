#include<stdio.h>
//This code show the GCD of iterative version
int GCD(int A,int B)
{
    while(B!=0)
    {
        int r=A%B;
        A=B;
        B=r;
    }return A;
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