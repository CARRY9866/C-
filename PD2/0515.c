// Open addressing(Array only)
// stored in array
/*insertion*/
    hv = hash(key%)%H;  // ..>hashsize
    while(hash[hv]!=NULL){
        hv=(hv+1)%H;
    }hashTab[hv]=strdup(key);
/*search:   (membership) IsMember*/
 hv = hash(key)%H;
while(hashTab[hv]!=NULL){
    if(strcmp(key,hashTab[hv])==0) return FOUND;
    hv=(hv+1)%H;
}return NotFound;
/*缺點:
-Collision機率較linklist高
-有可能有clustering effect (一些不同Key撞在一起)
-可能overflow table被填滿(當loading factor 趨近於1 performance 糟糕) better loding factor : 0.5 
-不supprot delete data (因為可能造成search fail)

優點:
-簡單明確
-事先知道array大小
*/
/*
    linear probing
    quadratic probing (rehashing) 但失去open addressing 簡單實作之優點
*/
#include    <stdio.h>
#include    <string.h>
#define MAXHASH (1<<10);
#define Maxline 1024

struct hnode{
        char *key;
        int cnt;
        //struct hnode *next;
}
struct hnode hTab[MAXHASH];

unsigned int hash33(char *key)
{
    unsigned int hv;
    hv =37891;  //random 
    char *ptr;
    ptr = key;
    while(*ptr){
        hv = ((hv<<5)+hv) + *ptr++;
    }
    return hv;
}

void htab_init(struct hnode *htab)
{
    int i;
    for(i=0;i<MAXHASH;i++)
    {
        htab[i].cnt = NULL;
        htab[i].cnt = 0;
    }
}

void h_insert(struct hnode *htab,char *key)
{
    unsigned int hv;
    hv = hash33(key) % MAXHASH;
    while(htab[hv].key !=NULL){
        hv = (hv+1) % MAXHASH;
    }
    htab[hv]=strdup(key);
}

void printHashTable(struct hnode *htab)
{
    
}

int h_find(struct hnode *htab,char key)
{
    unsigned int hv;
    hv = hash33(key) % MAXHASH;
    while(htab[hv].key !=NULL)
    {
        if(strcmp(htab[hv].key,key)==0)return hv;
        hv = (hv+1) % MAXHASH;
    }
    return -1;   
}

void h_add(struct hnode *htab,char key)
{
    int k = h_find(htab,key);
    if(k>=0){
        htab[k].cnt++;
    }
    else {
        h_insert(htab,key);
    }
}


int main()
{   
    char line[Maxline];
    /*fstat(); //取得　data cnt 估計值Ｎ
    MaxHash = N*2;
    htab_init(htab,MaxHash);*/
    hTab_init(hTab);

    while(fgets(line,Maxsize,stdin))
    {
        h_add(hTab,line); //h_add(hTab,line,MaxHash);
    }    
    qsort(hTab,sizeof(struct hnode),MAXHASH,mycmp); // node ->cnt 
    printHashTable(hTab);

return 0;
}