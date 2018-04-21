#include<stdio.h>
int main(){

    float x=2;
    int i;
    for(i=0;i<100;i++)
    {
        printf("%f=>%.1f\n",x,x);
        x+=0.010;
    }

    printf("%d\n",2L);
    return 0;
}