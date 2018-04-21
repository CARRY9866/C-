#include<stdio.h>

double mysqrt(int );

int main(){

        int i=0,j=0;
        int k=0,max=0,num=0;

        while((scanf("%d",&num)!=EOF)){
                max=0; 
                if(num==2){
                        printf("2\n");
                }
                else{
                        for(i=3;i<=num;i+=2){
                                k=0;
                                for(j=3;j<=mysqrt(i);j+=2){
                                        if(i%j==0){
                                                k=1;
                                                break;
                                        }
                                }
                                if(k==0 && max<i){
                                        max=i;
                                }
                        }
                        printf("%d\n",max);
                }
        }

        return 0;
}


double mysqrt(int num){

        double low,high,mid,small=0.1;

        low=1;
        high=num;

        while(high - low > small){
                mid = (low+high)/2;
                if(mid*mid > num){
                        high = mid;
                }
                else{
                        low = mid;
                }        
        }
        return (low+0.5);
}
