#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Maxkey 100

struct tnode{
	char key[Maxkey];
	int cnt;
	struct tnode *link;
};

void printlist(struct tnode* L)
{
	struct tnode *lptr = L ;
	while(lptr)
	{
		printf("%d %s\n",lptr->cnt,lptr->key);
		lptr =lptr ->link;
	}
}

struct tnode* newnode(char key[Maxkey])
{
	struct tnode* tmp =(struct tnode*)malloc(sizeof(struct tnode));
	strcpy(tmp->key,key);
	tmp->cnt=1;
	tmp->link=NULL;
	return tmp;
}

struct tnode* insert(struct tnode* node , char key[Maxkey])
{
	if(node == NULL) return newnode(key);
	if(strcmp(node->key,key)==0)node->cnt++;
	else node->link = insert(node->link,key);
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

void swap(struct tnode *a,struct tnode *b)
{
	char tmpk[Maxkey];
	int tmpcnt;

	strcpy(tmpk,a->key);
	tmpcnt = a->cnt;
	strcpy(a->key,b->key);
	a->cnt = b->cnt;
	strcpy(b->key,tmpk);
	b->cnt = tmpcnt;
}

void sort1(struct tnode *L)	//bubblesort 
{
	int swapped;
	struct tnode *pt1,*pt2=NULL;

	if(L==NULL)return;

	do{
		swapped=0;
		pt1=L;
		while(pt1->link != pt2)
		{
			if(pt1->cnt < pt1->link->cnt)
			{
				swap(pt1,pt1->link);
				swapped=1;
			}
			else if(pt1->cnt == pt1->link->cnt)
			{
				if(strcmp(pt1->key,pt1->link->key)>0)
				{
					swap(pt1,pt1->link);
				}
			}
			pt1=pt1->link;
		}
		pt2=pt1;

	}while(swapped);

}	

// void sort2(struct tnode * L)	//sorting key value if same cnt
// {
// 	struct tnode *t=L;
// 	while(t)
// 	{
		
// 	}
// }

int main(){

	struct tnode *linklist=NULL;
	char key[Maxkey];
	while(getword(key,Maxkey))
	{
		linklist = insert(linklist,key);
	}
	sort1(linklist);
	printlist(linklist);

return 0;}
