#include<stdio.h>
int main(){
    while(1)
    {
        int n;
        printf("Please input a num: ");
        scanf("%d",&n);
        printf("The value of \"sum of 1 to %d\" is %d \n",n,n*(n+1)/2);
    }
    return 0;
}