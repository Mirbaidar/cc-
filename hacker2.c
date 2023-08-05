#include<stdio.h>
#include<string.h>
int main(){
    char ch , s[100] , sen[120] ;
    
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("[^\n]%c",sen);
    
    printf("%c \n",ch);
    printf("%s \n",s);
    printf("%s",sen);
       
    
   
   
    return 0;
}