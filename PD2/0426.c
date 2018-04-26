#include<stdio.h>
#include<string.h>
struct Lnode * linklist_inert(struct Lnode *ptr,char key)
{
	p = malloc
}

//

struct tnode * BST_insert(struct tnode *T ,char key)
{
	if(T==NULL){
		
		struct tnode *ptr;
		ptr = (struct tnode *)malloc(sizeof(struct tnode));
		strcpy(ptr->key,key);
		return ptr;
	}
	else{
			
	k=strcmp(T->key,key);
	if(k<0)T->right = BST_insert(T->right,key);
	else if(k>0)T->left = BST_insert(T->left,key);
	}
	
}

//

struct counter{
		char *key;
		int cnt;
}

int linklist2array(struct Lnode *lptr,struct counter *C)
{
	int len;
	len = linklistlen(lptr);//count nodes of linklist
	C = (struct count*)malloc(sizeof(struct count)*len);
	int k=0;
	struct Londe *ptr=lptr;
	while(ptr!=NULL)
	{
		C[k].key=ptr->key;
		C[k].cnt=ptr->cnt;
		k++;
		ptr=ptr->next;
	}
}

//case2

struct counter * linklist2array(struct Lnode *lptr)
{
	

}

//hash

hashfunc(char *key)
h_insert(struct HS *h_counter,char *key);
h_find(struct HS *h_counter,char *key);


int main(){

	


return 0;
}
