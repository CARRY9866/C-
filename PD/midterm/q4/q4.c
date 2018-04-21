#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){

	
	bool isVowel(char x){
		char vowel[10]={'a','e','i','o','u','A','E','I','O','U'};
		int i ;
		bool ret=false;
		for(i=0;i<10;i++)
			if(x==vowel[i])
				ret = true;
		return ret;
	}


	char x ,stack[10];
	int i=0,top=-1;

	bool push(char item)
	{
		if(top!=999)
		{	stack[++top]=item;
			return true;
		}
		else
			return false;
	}

	char pop()
	{
		if(top!=-1)
			return stack[top--];
		else 
			return 0;
	}

	while((x=getchar())!='\n')
	{
		if(isVowel(x))
			push('x');
		else
			push(x);
		i++;
	}
	
	const int size =i;
	for(i=0;i<size;i++)
	{	
		printf("%c",pop());
	}
	printf("\n");

return 0;
}
