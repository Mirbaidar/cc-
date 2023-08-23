#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct studentsData
{
    int rollNo;
    char name[34];
    char department[34];
    int yaer;
} studentsData;
void check(char* s1, char* s2){
    if(s1 == s2){
        printf("they both are equal");
     }else{
        printf("they are not equal");
    }

}
int main()
{

    studentsData baidar;
    strcpy(baidar.department, "computer science");
    baidar.rollNo = 9;
    baidar.yaer = 2022;

    studentsData zaid;
    strcpy(zaid.department, "computer science");
    zaid.rollNo = 34;
    zaid.yaer = 2024;

    check(baidar.department, zaid.department);
    return 0;
}