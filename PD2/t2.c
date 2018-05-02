#include<stdio.h>
#include<string.h>

int main(){

    char arr[10][2][11];
    strcpy(arr[0][0],"test1test1");
    strcpy(arr[0][1],"test2test22");
    printf("%s\n%s\n",arr[0][0],arr[0][1]);

    return 0;
}