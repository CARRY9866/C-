/*
    sort作業

*/


FILE *fp;
fp = fopen(pathname,"r");
fgets

ptr=next_Buffer
int i=0;
while(fgets(ptr,Maxline,fp))
{
    line[i]=ptr;
    ptr++;
    while(*ptr && ptr<bufEnd )ptr++;
    ptr++;
}
//fstate to make sure size of file
//bonus : fstate and malloc 大塊memory

ptr = strbuffer;
for(i=0;i<N;i++)
{
    lines[i]=ptr;
    for(j=0;j<6;j++)
    *ptr++ = rand()%26+'a';
    *ptr++='\0';
}

qsort(lines,size of element, number of elements, mycompare)
qsort(lines,sizeof(char*),number of elements,mycompare)

int mycompare(void *p,void *q)
{
    char **x=p;
    char **y=q;
    return(strcmp(*x,*y));
}