#include<stdio.h>

char getToken(char *line)
int gettype(char *token,int *token_value)

//postfixEcal(struct exp)
postfixEval(char *Expression,int *result)
{
	char *token;
	int token_type;
	int token_value;
	int value1 , value2;
	while(token = getToken(Expression) !=EOF)
	{
	token_type = gettype(token,&token_value);
	if(token_tpye==0) push(stack,token_value);
	else {
			value1=pop(stack);
			value2=pop(stack);
			switch(token_type)
					case 1 
					{	value1 = value1 + value2;
						push(stack,value1);
					}
					case 2
					{
						value1 = value1 - value2;
						push(stack,value1);
					}	
		 }
	}
	if(!isempty(stack)) *result = pop(stack);
	if(isEmpty(stack) return success;
	else return falure;

}
int main(){


return 0;
}
