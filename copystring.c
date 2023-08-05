#include<stdio.h>
#include<string.h>
int main(){
    //shallow copy
    char s1[]="collage wallah";
    char* s2 =s1;
    s1[0]='m';
    printf("%s \n",s2);
    //deep copy
    char s3[]="physics wallah";
    char s4[]="physics wallah";
    s3[0]='x';
    puts(s3);
    puts(s4);
    return 0;
}