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
#define maxHash 1048753

struct dnode{
    char *key;
    int cnt;
    struct dnode *next;
};


struct dnode *hashTab[maxHash];

hashtab_init(struct dnode* hashTab , int maxHash)
{
    int i;
    for(i=0;i<maxHash;i++){
        hashTab[i]=NULL;
    }
}

struct dnode* h_find(struct dnode* hashTab, cahr *key)
{
    
}

h_insert(struct dnode* hashTab,char *key){}
h_delete(struct dnode* hashTab,struct node *p,char *key){}