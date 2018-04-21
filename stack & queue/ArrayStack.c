#include<stdio.h>
#include<stdlib.h>
//This code show an instance of stack using array structure
int main(){

    int *stack,top,n;

    void create(int size){
        n=size;
        stack=(int*)malloc(sizeof(int)*n);
        top=-1;
    }
    int isEmpty(){return top==-1;}
    int isFull(){return top==n-1;}

    int push(int item)
    {
        if(isFull())return 0;
        else
        {
            stack[++top]=item;
            return 1;
        }
    }

    int pop(int *item)
    {
        if(isEmpty())return 0;
        else
        {
            *item=stack[top--];
            return 1;
        }
    }

    create(10);
    int i;
    for(i=1;i<10;i++)push(i);
    for(i=0;i<10;i++)printf("%d",stack[i]);
    printf("\n");
    for(i=1;i<10;i++)
    {
        int item;
        if(pop(&item))
        printf("%d",item);
    }
    printf("\n");
    return 0;
}