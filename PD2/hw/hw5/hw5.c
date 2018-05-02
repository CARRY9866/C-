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

struct tnode* search(struct tnode* root,char key[Maxkey])
{
	if(root==NULL || ((strcmp(root->key,key)==0) && ((root->cnt)>0))) return root;
	if(strcmp(root->key,key)<0) return search(root->rchild,key);
	if(strcmp(root->key,key)>0) return search(root->lchild,key);
	return NULL;
}

void inorder(struct tnode* root)
{
	if(root!=NULL)
	{
		inorder(root->lchild);
		if(root->cnt>0)
		printf("%s\t%d\n",root->key,root->cnt);
		inorder(root-> rchild);
	}
}

struct tnode* insert(struct tnode* node,char key[Maxkey])
{
	if(node == NULL) return newnode(key);
	if(strcmp(key,node->key)<0) node->lchild = insert(node->lchild,key);
	else if(strcmp(key,node->key)>0) node->rchild = insert(node->rchild,key);
	else if(strcmp(key,node->key)==0) node->cnt++;
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

void delete(struct tnode* root,char key[Maxkey])
{
	struct tnode* tmp;
	if((tmp = search(root,key)) && tmp->cnt > 0) tmp->cnt--; 
}

int countN(struct tnode* t)
{
	if(t==NULL)return 0;
	else
	{
		int l=countN(t->lchild);
		int r=countN(t->rchild);
		return l+r+1;
	}
}
int addtoarray(struct tnode* root,char arr[1024][2][Maxkey],int i)
{
	if(root==NULL)return i;
	char buffer[Maxkey];
	itoa(root->cnt,buffer,10);
	strcpy(arr[i][0],buffer);
	strcpy(arr[i][1],root->key);
	i++;
	if(root->lchild!=NULL) i=addtoarray(root->lchild,arr,i);
	if(root->rchild!=NULL) i=addtoarray(root->rchild,arr,i);
	return i;
}
void count(char arr[1024][2][Maxkey],int n)
{	
	int i;
	for(i=0;i<n;i++)
	if(strcmp(arr[i][0],"0")!=0)printf("%s\t%s\n",arr[i][0],arr[i][1]);
}

void swap(char *a,char *b)
{
    char tmp[Maxkey];
    strcpy(tmp,a);
    strcpy(a,b);
    strcpy(b,tmp);
}

void selectionsort(char B[1024][2][Maxkey],int n)
{
    int i,j,max;
    for(i=n-1;i>0;i--)
    {   
        max=i;
        for(j=i;j>=0;j--)
        {
            if(strcmp(B[j][0],B[max][0])<0)
            max=j;
        }
        if(max!=i)
		{
        	swap(B[i][0],B[max][0]);
			swap(B[i][1],B[max][1]);
		}
	}
}

int main(){

	struct tnode *bst=NULL,*tmp=NULL;
	char com[lim];
	char key[Maxkey];
	int len;

	while((len=getword(com,lim))>0)
	{
			if(strcmp(com,"insert")==0)
			{
				getword(key,Maxkey);
				bst = insert(bst,key);
			}
			else if(strcmp(com,"delete")==0)
			{
				getword(key,Maxkey);
				delete(bst,key);
			}
			else if(strcmp(com,"query")==0)
			{
				getword(key,Maxkey);
				if((tmp = search(bst,key)))
				printf("%s\t%d\n",tmp->key,tmp->cnt);
			}
			else if(strcmp(com,"inorder")==0)
			{
				inorder(bst);
			}
			else if(strcmp(com,"count")==0)
			{
				char arr[1024][2][Maxkey];
				int n=countN(bst);
				addtoarray(bst,arr,0);
				selectionsort(arr,n);
				count(arr,n);				
			}
	}



return 0;
}
