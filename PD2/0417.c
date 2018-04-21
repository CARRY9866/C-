#include <stdio.h>
#include	<string.h>
#define MaxKey 64
#define MaxValue 1024

char *textbuf;
struct tnode {
		char key[MaxKey];
		int cnt;
		//char value[MaxValue];
		// char *key;
		// char *value;
		struct tnode *lchild;
		struct tnode *rchild;
};

struct tnode *bst_insert(struct tnode *tree, char *key)
{
	struct *tnode , *tmp;
	if(tree == NULL){
			tmp = malloc(sizeof(struct tnode));
			strcpy(tmp->key, key);
			tmp->cnt =1;
			return tmp;
	}
	k = strcmp(tree->key,key);
	if(k==0) tree->cnt++;
	else if(k<0) tree->rchild = bst_insert();
	else tree->lchild = bst_insert();
	return tree;
}

void bst_delete(struct tnode *tree, char *key)
{
	struct tnode *tptr;

	tptr = bst_find(tree, key);
	tptr->flag = DELETED;
	
}

void bst_delete(struct tnode *tree, char *key)
{
	struct tnode *tptr;

	tptr = bst_find(tree, key);
	tptr->flag = DELETED;
}

main()
{
	struct tnode *bst = NULL;
	struct tnode *kvdb;

	char line [MaxLine];
	char key [MaxKey];
	char value [MaxValue];;

	int N=0;

	while(fgets(line,MaxLine,stdin)){
		parseline(line,key,value);
		insert(bst,key,value);
		N++;
	}
	kvdb = (struct tnode *) malloc(sizeof(struct tnode)*N);
	
	tree2array(bst,kvdb);
	sort(kvdb);
	output(kvdb);

	printtree(bst);
	traverse(bst,
return 0;
}
