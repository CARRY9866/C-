#include <stdio.h>
#include <stdlib.h>


int gcd(int m,int n){
    while(n != 0){
        int r = m % n;
        m = n;
        n = r;
    }
    return m;
}

int lcm(int m,int n){
    return m * n / gcd(m,n);
}
int main(){
    int m = 0, n = 0;
    scanf("%d %d",&m,&n);
    printf("%d\n",gcd(m,n));
    printf("%d\n",lcm(m,n));
    return 0;
}