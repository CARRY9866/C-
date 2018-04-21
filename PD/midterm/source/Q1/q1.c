#include <stdio.h>
int main()
{
    long long int i,x,y;
    while(scanf("%lld%lld",&x,&y)!=EOF)
    {

    printf("X\tY\tX+Y\tX-Y\tX*Y\n");
    for(i=1;i<=40;i++)printf("-");
    printf("\n");
    for(i=0;i<5;i++)
    {
    printf("%lld\t%lld\t%lld\t%lld\t%lld\n",x,y,x+y,x-y,x*y);
    x++,y++;
    }
    }
    return 0;
}







