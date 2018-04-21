#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
	
	
	bool isSpace(char s){
		if(s==' '||s=='\t')
			return true;
		else
			return false;
	}

	bool isLine(char l){
		if(l=='\n')
			return true;
		else
			return false;
	}

	bool isEnglish(char e){
	
		char E1[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
		char E2[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

		int j;
		bool ret=false;
		for(j=0;j<26;j++)
		{
			if(e==E1[j])
				ret = true;

			if(e==E2[j])
				ret = true;

		}
		return ret;
	}

	bool isDigit(char d){
		if(d=='0'||d=='1'||d=='2'||d=='3'||d=='4'||d=='5'||d=='6'||d=='7'||d=='8'||d=='9')
			return true;
		else 
			return false;
	}

	char x ;
	int res[4]={0,0,0,0} ; 
	while((x=getchar())!=EOF)
	{
		if(isSpace(x))
			res[0]++;
		if(isLine(x))
			res[1]++;
		if(isEnglish(x))
			res[2]++;
		if(isDigit(x))
			res[3]++;

		
	}

	printf("Space count: %d\n",res[0]);
	printf("Line count: %d\n",res[1]);
	printf("English count: %d\n",res[2]);
	printf("Digit count: %d\n",res[3]);



	return 0;
}
