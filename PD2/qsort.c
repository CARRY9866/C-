#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

struct addr { 
char name[32]; 
int age; 
}; 

int icmp(const void *p, const void *q) 
{ 
int *x = (int *) p; 
int *y = (int *) q; 
return *x - *y; 
} 

int mystrcmp(const void *p, const void *q) 
{ 
char **x = (char **) p; 
char **y = (char **) q; 
return (strcmp(*x, *y)); 
} 

int addrcmp(const void *p, const void *q) 
{ 
struct addr *x = (struct addr *) p; 
struct addr *y = (struct addr *) q; 
return strcmp(x->name, y->name); 
} 

void main() 
{ 
int i; 
int cnt = 6; 
int A[] = {8, 12, 3, 31, 11, 1}; 
char *Names[] = { "john", "apple", "banana", "jack", "ten", "win"}; 
struct addr addbook[] = { "john", 20, "apple", 19, "banana", 8, "jack", 25, "ten", 30 
, "win", 10}; 

qsort(A, cnt, sizeof(int), icmp); 
for(i=0; i<cnt; i++) { 
printf("%d\n", A[i]); 
} 
qsort(Names, cnt, sizeof(char *), mystrcmp); 
for(i=0; i<cnt; i++) { 
printf("%s\n", Names[i]); 
} 
qsort(addbook, cnt, sizeof(struct addr), addrcmp); 
for(i=0; i<cnt; i++) { 
printf("%s\n", addbook[i].name); 
} 
} 