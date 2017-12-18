#include<stdio.h>
//This code show Exponential of recursion version

int Exp(int x ,int y)
{
    if(y==0)return 1;
    return Exp(x,y-1)*x;
}

int main(){

    while(1)
    {
        int x ,y;
        printf("Please input two numbers to calculate \"x to power of y\" :");
        scanf("%d%d",&x,&y);
        printf("The value of \"%d to power of %d \" is : %d \n",x,y,Exp(x,y));    
    }

    return 0;
}