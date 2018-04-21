#include<stdio.h>

int main(void){
        

        int i=0,j=0;
        
        printf("\t|");
        for(i=1;i<10;i++){
                printf("\t%d",i);
        }
        printf("\n---------------------------------------------\n");
        for(i=1;i<10;i++){
                printf("%d\t|",i);
                for(j=1;j<10;j++){
                        printf("\t%d",(i*j));
                }
                printf("\n");
        }
        return 0;
}
