#include<stdio.h>

int gcd(int x ,int y){
	
		while(y!=0)
		{
			int r = x%y;
			x=y;
			y=r;
		}
		return x;
	
}

int lcm(int x,int y){
	return x*y/gcd(x,y);
}




int main(){

	int x , y ;
	scanf("%d%d",&x,&y);
	printf("%d\n",gcd(x,y));
	printf("%d\n",lcm(x,y));




return 0;
}
