#include<stdio.h>
#include<string.h>
#define Maxline 1024
#define Maxstudent 1024

void usage(){
    printf("Please input command(i/d/u/f/l/q) and data:\nInsert the record:i studentID\\tname\\tphone\\temail\nDelete the record:d studentID\nUpdate the record:u studentID\\tname\\tphone\\temail\nFind the record:f [string]\nList the record:l\nQuit:q\n");

}

struct contact {
    char studentID[10];
    char name[100];
    char phone[20];
    char email[100];
};

int main(){
    usage();
    struct contact stuContact[Maxstudent];
    char line[Maxline];
    char *qtr;
    char *ptr;
    int sdx=0,i;
    printf("sizeof struct contact: %d\n",sizeof(struct contact));
    
    while(fgets(line,Maxline,stdin))
    {
        if(line==strstr(line,"i"))
        {
            if((ptr = strstr(line,"studentID:")))
            {
                qtr = stuContact[sdx].studentID;
                ptr = ptr+10;
                while(*ptr!='\t')
                {
                    *qtr++=*ptr++;
                }
            }
            if((ptr = strstr(line,"name:")))
            {
                ptr = ptr+5;
                qtr = stuContact[sdx].name;
                while(*ptr!='\t')
                {
                    *qtr++=*ptr++;
                }
            }
            if((ptr = strstr(line,"phone:")))
            {
                ptr = ptr + 6;
                qtr = stuContact[sdx].name;
                while(*ptr!='\t')
                {
                    *qtr++=*ptr++;
                }
            }
            if((ptr = strstr(line,"email:")))
            {
                ptr = ptr + 6;
                qtr = stuContact[sdx].email;
                while(*ptr!='\n')
                {
                    *qtr++=*ptr++;
                }
            }
            sdx++;
            printf("Insert successful!\n");
        }

        if(line==strstr(line,"l"))
        {
            for(i=0;i<sdx;i++)
            {
                printf("studentID:%s\tname:%s\tphone:%s\temail:%s\n",stuContact[sdx].studentID,stuContact[sdx].name,stuContact[sdx].phone,stuContact[sdx].email);
            }
        }

        if(line==strstr(line,"q"))
        {
            printf("Thanks for your using!\n");
            break;
        }

    }
    return 0;
}