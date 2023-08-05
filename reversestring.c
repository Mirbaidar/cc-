#include <stdio.h>
#include <string.h>
int main()
{
    char str[15];
    puts("enter the string");
    //
    scanf("%[^\n]s", str); // gets(str);
    int size = 0;
    int k = 0;
    while (str[k]!= '\0')
    {
        size++;
        k++;
    }

    puts("the string is ");
    puts(str);
    // printf("the size of string is %d",size);
    for (int i=0,j;j=size-1, i<=j;i++,j--)
    {
       char temp=str[i];
       str[i]=str[j];
       str[j]=temp;
    }
    puts("the reverse string is ");
    puts(str);
    return 0;
}