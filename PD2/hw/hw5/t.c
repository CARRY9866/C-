#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Maxkey 64
#define lim 64

struct tnode 
{
	char key[Maxkey];
	int cnt;
	struct tnode *lchild;
	struct tnode *rchild;
};

struct tnode* newnode(char key[Maxkey])
{
	struct tnode *tmp = (struct tnode*)malloc(sizeof(struct tnode));
	strcpy(tmp->key,key);
	tmp ->cnt = 1;
	tmp -> lchild = tmp ->rchild = NULL;
	return tmp;
}

struct tnode* insert(struct tnode* node,char key[Maxkey])
{
	if(node == NULL) return newnode(key);
	if(strcmp(key,node->key)<0) node->lchild = insert(node->lchild,key);
	else if(strcmp(key,node->key)>0) node->rchild = insert(node->rchild,key);
	if(strcmp(key,node->key)==0) node->cnt++;
	return node;
}


int getword(char *x,int max)
{
	int i=0,c,flag=0;
	while((c=getchar())!=EOF)
	{
		if(i<max && ((c>=65&&c<=90)||(c>=97&&c<=122)))
		{	
			flag=1;
			x[i]=c;
			i++;
		}
		else if(flag) break;
	}
	x[i]='\0';
	return i;
}

int main()
{
	struct tnode *bst=NULL;
    int len;
    char com[64],key[64];
    while((len=getword(com,64))>0)
    {
        if(strcmp(com,"insert")==0)
        {
			getword(key,Maxkey);
			if((bst=insert(bst,key)))printf("insert success!");
			printf("%s\t%d\n",bst->key,bst->cnt);
		}  
        else if(strcmp(com,"delete")==0)
        printf("delete!\n");
    }
    return 0;
}