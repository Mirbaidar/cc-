#include<stdio.h>
int main(){
    char arr[50]="hello the best youtube channel is coiiage wallah \0";
    int i=0;
    while (arr[i]!='\0')
    {
        printf("%c",arr[i]);
        i++;
    }
    
    return 0;
}