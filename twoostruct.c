#include <stdio.h>
#include <string.h>
int main()
{
    struct Person
    {
        char name[50];
        int salary;
        int age;
    } zaid, baidar;
    baidar.age = 18;
    baidar.salary = 200000;
    strcpy(baidar.name, "mir baidar");
    zaid.age = 12;
    zaid.salary = 200000;
    strcpy(zaid.name, "mir zaid");
   
   printf("%d \n",baidar.salary);

   puts(zaid.name);
   printf("%d",baidar.age);

    return 0;
}