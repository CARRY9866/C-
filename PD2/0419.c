#include<stdio.h>
#define Maxkey 64
#define Maxvalue 1024

struct tnode
{
	char key[Maxkey];
	char value[Maxvalue];
	struct tnode *lchild;
	struct tnode *rchild;
}

LevelOrder(struct tnode *tree)
{
	struct tnode *tptr;
	tptr =tree;
	enqueue(Queue,tptr);
	while(!isEmpty(Queue))
	{
		tptr = dequeue(Queue);
		printf(tptr->key);
		if(tptr->lchild !=NULL) enqueue(Queue,tptr->lchild);
		if(tptr->rchild !=NULL) enqueue(Queue,tptr->rchild);
	}
}


int main(){
	




return 0;}
