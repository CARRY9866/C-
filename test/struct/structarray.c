#include<stdio.h>
int main(){

    int node[10]={67,80,85,83,5,65,75,91,88,-1};
    int begin=0;
    printf("id\tmath\tenglish\tcomputer\n");
    while(begin!=-1)
    {
        printf("%c\t%d\t%d\t%d\n",node[begin],node[begin+1],node[begin+2],node[begin+3]);
        begin = node[begin+4];
    }

    return 0;
}