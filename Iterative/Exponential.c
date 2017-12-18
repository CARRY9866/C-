#include<stdio.h>
//This code show Exponential of iterative version

int Exp(int x ,int y)
{
    int i,r=1;
    for(i=0;i<y;i++)r=r*x;
    return r;
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