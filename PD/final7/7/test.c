#include <stdio.h>
#include <stdbool.h>

	bool isPrime(int x)
	{	
		int i;

	
			if(x==2||x==3)return 1;
			if(x%2==0) return 0;
			for(i=3;i<x/2;i+=2)
				if(x%i==0)
					return 0;
			return 1;
		
	}

int main(){

	int x,i,c,o[10000];
	while((scanf("%d",&x)!=EOF) && (x!=0))
	{
        c=0;
        if(x==1)printf("error!\n");
        else if(x==0) continue;
        else{
		for(i=2;i<=x;i++) if((x%i==0)&&isPrime(i)) o[c++]=i;
        if(c!=0){
            for(i=0;i<c-1;i++)printf("%d ",o[i]);
            printf("%d\n",o[c-1]);
            }
        }
	}

return 0;
}
