#include <stdio.h>
#include <stdbool.h>
#include <string.h>
typedef struct person
{
    int age;
    float weight;
} person;
int main()
{

    person p1;
    person p2;
    p1.age = 23;
    p1.weight = 12.4;

    p2.age = 45;
    p2.weight = 34.5;
    printf("%d \n", p1.age);
//here we are going to use pointer to change the value of structure member 

    person *x = &p1;
    (*x).age = 89;
    printf("%d", p1.age);
    return 0;
}