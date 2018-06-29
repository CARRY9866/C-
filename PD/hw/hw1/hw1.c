#include <stdio.h>
#include <string.h>

int main(){
	
	while(1){
		
		char key[100];
		scanf("%s",key);
		if(strcmp(key,"Hello")==0)
		{
			printf("World\n");
		}
		else if(strcmp(key,"apple")==0)
		{
			printf("ī�G\n");
		}
		else if(strcmp(key,"banana")==0)
		{
			printf("����\n");
		}
		else if(strcmp(key,"orange")==0)
		{
			printf("�h�B\n");
		}
		else if(strcmp(key,"pineapple")==0)
		{
			printf("���\n");
		}
		else if(strcmp(key,"watermelon")==0)
		{
			printf("���\n");
		}
		else if(strcmp(key,"grape")==0)
		{
			printf("����\n");
		}
		else if(strcmp(key,"longan")==0)
		{
			printf("�s��\n");
		}
		else if(strcmp(key,"ballet")==0)
		{
			printf("�ݼ�\n");
		}
		else if(strcmp(key,"chair")==0)
		{
			printf("�Ȥl\n");
		}
		else if(strcmp(key,"door")==0)
		{
			printf("��\n");
		}
		else if(strcmp(key,"0")==0)
		{
			break;
		}
		else 
		{
			printf("	?\n");
		}






	}

	return 0;
}
