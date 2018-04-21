#include<stdio.h>

int main(){
	
	int x ,i ,j ,space ,star;
	while(scanf("%d",&x)!=EOF)
	{
		for(i=0,star=1,space=x/2;i<=x/2;i++,star+=2,space-=1)
		{
			for(j=0;j<space;j++)
				printf(" ");
			for(j=0;j<star;j++)
				printf("*");
			printf("\n");
		}
		for(i=1,star=x-2,space=1;i<=x/2;i++,star-=2,space+=1)
		{
			for(j=0;j<space;j++)
				printf(" ");
			for(j=0;j<star;j++)
				printf("*");
			printf("\n");
		}
	
	
	}


return 0;
}
