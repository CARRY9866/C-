#include<stdio.h>
int main(){

    struct score
    {
        char id;
        int math;
        int en;
        int cp;
        struct score *next;
    };

    typedef struct score node;
    node first,second,*begin;

    first.id='C';
    first.math=80;
    first.en=85;
    first.cp=83;
    first.next=&second;
    second.id='A';
    second.math=75;
    second.en=91;
    second.cp=88;
    second.next=NULL;
    begin=&first;

    printf("id\tmath\tenglish\tcomputer\n");
    while(begin!=NULL)
    {
        printf("%c\t%d\t%d\t%d\n",begin->id,begin->math,begin->en,begin->cp);
        begin=begin->next;

    }


    return 0;
}