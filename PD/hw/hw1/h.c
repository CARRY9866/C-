#include<stdio.h>
#include<string.h>

int main(){
    printf("你好\n");

    while(1)
    {
        char a[100];
        scanf("%s",a);
        if(strcmp(a,"Hello")==0)printf("World!\n");
        else if(strcmp(a,"apple")==0)printf("蘋果\n");
        else if(strcmp(a,"0")) break;
        else printf("李公蝦毀?\n");
    }
    return 0;
}