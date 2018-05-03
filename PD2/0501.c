/*
    search structure -> ex: BST 
    index structire 

    internal hash -> data in memory
    external hash -> data in disk

    static
    extensible

    perfect hashing
    non perfect hashing

    hash functin data structure
    -hash table
    -colision diffierent keys have same hash value
    -collision handling
        open address ->array
        linked list -> array of link list

    hash table : 
        loading factor
        bucketing
        hash table size
        -data node structure
        -memory management
        -key value store

    struct dnode{           
        char key[Maxkey];   //drawback:waste size
        char *key;          //goodness:make good use of size  //node->key=strdup(key); drawback:malloc call too often

        int cnt;
        struct dnode *next;
    }

*/
// Hash implementatino for tcount

#include<stdio.h>
#include<string.h>
#define maxHash 1048753

struct dnode{
    char *key;
    char *value;
    int cnt;
    struct dnode *next;
};

hashtab_init(struct dnode* hashTab , int maxHash)
{
    int i;
    for(i=0;i<maxHash;i++){
        hashTab[i]=NULL;
    }
}

unnsigned hashfun(char *key){}

struct dnode* h_find(struct dnode* hashTab,int maxHash, char *key)
{
    unsigned int hv;
    struct dnode *lptr;
    hv = hashfunc(key)%maxHash;
    lptr = hashTab[hv];
    while(lptr){
        if(strcmp(lptr->key,key)==0)return lptr;
        lptr=lptr->next;
        return NULL;
    }//return l_find(lptr,key);
}

int h_insert(struct dnode* hashTab,int maxHash,char *key,char *keyBufptr,char *keyBufEnd)
{
    int len;
    len=strlen(key);
    struct tnode* lptr,p;

    if( (len-1) > (keyBufEnd-keyBufptr) ) return KeyBufFull;
    hv = hashfunc(key)%maxHash;
    lptr=hashTab[hv];
    p=(struct dnode*)malloc(sizeof(struct dnode));
    if(p==NULL)return DnodeMallocFailed;
    p->key=keyBufptr;
    strcpy(keyBufptr,key); KeyBufptr+=len+1;
    p->cnt=1;p->next=hashTab[hv];
    return success;
    // if(l_insert(lptr,key)==NULL)return DnodeMallocFailed;
    // else return success;

}

h_delete(struct dnode* hashTab,struct node *p,char *key){}

int main()
{
    struct dnode *hashTab[maxHash];
    char *keyBuffer,*keyBufptr;
    keyBuffer=(char*)malloc(maxkeyBuffer);
    char *keyBufEnd;    //boundary  test

    while(fgets(line,Maxline,stdin))
    {
        type=getkey(line,key);
        if(type==add) add(htdb,key);
        if(type==substract) subtract(htdb,key);
    }

    struct hdb_handler
    {
        struct dnode *hashTab[maxHash];
        u_int maxHash;
        char *keyBuffer;
        char *keyBufptr;
        char *keyBufEnd;
    } htdb;

    // +apple
    // -apple
    // .
    // .
    // .
    // -jack
    // +apple
}