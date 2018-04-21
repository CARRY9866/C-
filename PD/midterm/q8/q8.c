#include<stdio.h>

int main (){

	int x,nspace,nstar,i,j;
	while(scanf("%d",&x)!=EOF)
	{
		if(x>0&&x<1000)
		{
			for(nspace=x/2,nstar=1;nspace>=0 && nstar<=x;nspace--,nstar+=2){
			
				for(i=0;i<nspace;i++)
					printf(" ");
				for(j=0;j<nstar;j++)
					printf("*");
				printf("\n");
			
			}
			for(nspace=1,nstar=x-2;nspace<=x/2 && nstar>=1;nspace++,nstar-=2){
			
				for(i=0;i<nspace;i++)
					printf(" ");
				for(j=0;j<nstar;j++)
					printf("*");
				printf("\n");
			
			}


		
		
		}
	
	}



return 0;
}
