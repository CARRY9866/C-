#include<stdio.h>
//This code show Permutation using recursion 

void swap(char *a,char *b)
{
    char t=*a;
    *a=*b;
    *b=t;
}

void Permutation(char *list,int m,int n){
    if(m==n)
    {
        int i;
        for(i=0;i<n;i++)printf("%c",list[i]);
        printf("\n");
    }
    else //i<n
    {
        int j;
        for(j=m;j<n;j++)
        {
            swap(&list[j],&list[m]);  //輪流當頭
            Permutation(list,m+1,n);//剩餘繼續排列組合
            swap(&list[j],&list[m]);  //當頭該回合結束換回
        }
    }
}

int main(){
    char list[4]="abc";
    Permutation(list,0,3);
    return 0;
}