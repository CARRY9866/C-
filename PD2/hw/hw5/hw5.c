#include<stdio.h>
#include<string.h>
#define Maxkey 64

struct tnode 
{
	char key[Maxkey];
	int cnt;
	struct tnode *lchild;
	struct tnode *rchild;
}

void parseline(char *line,char *com,char *key)
{
	int n=0;
	while(line[n]!='\t')
	{
		com[n]=line[n];
		n++;
	}
	
	while()

}

int main(){

	struct tnode *bst=NULL;

	char line[Maxline];
	char com[64];
	char key[Maxkey];

	int N=0;

	while(fgets(line,Maxline,stdin))
	{
			parseline(line,com,key);
			insert(bst,key);
			N++;
	}


return 0;
}
