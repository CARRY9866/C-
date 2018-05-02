#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Maxkey 20
#define Maxline 20

struct tnode{
	char key[Maxkey];
	struct tnode *next;
};

void printlist(struct tnode* L)
{
	struct tnode *lptr = L ;
	while(lptr)
	{
		printf("%s\n",lptr->key);
	}

}

struct tnode* insert(struct tnode* L , char* key)
{
	struct tnode* tmp = (struct tnode*)malloc(sizeof(struct tnode));
	strcpy(tmp->key,key);
	if(L == NULL)
	{
		tmp->next = NULL;
		return tmp;
	}
	tmp -> next = L;
	return tmp;

}

int main(){

	struct tnode *L;
	char line[Maxline];
	while(fgets(line,Maxline,stdin))
	{
		L = insert(L,line);
	}
	printlist(L);
return 0;}
