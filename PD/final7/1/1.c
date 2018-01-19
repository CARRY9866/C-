#include<stdio.h>
#include<string.h>
int atoi(char *a){
    int sum=0,i;
    for(i=0;a[i]!='\0';i++)
    {
        sum=sum*10+a[i]-'0';
    }
    return sum;
}
int main(int argc,char **argv){
    char *a,*b,*c,*m="+",*d="/";
    int x,y;
    double r;
    if(argc==4)
    {
        a=argv[1];
        b=argv[2];
        c=argv[3];
        x=atoi(a);
        y=atoi(c);
        if(!strcmp(b,m)) r=x+y;
        else if(!strcmp(b,d)) r=x/y;
        printf("%.3f\n",r);
    }
}