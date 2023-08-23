#include <stdio.h>
#include <stdbool.h>
#include <string.h>
typedef struct teamPak
{
    int run;
    int age;
    char name[23];
} teamPak;

void changevalue(teamPak *ss)
{
    //(*ss).age = 29; better way inb downwards
    ss->age = 54;
    (*ss).run = 8906;
    strcpy((*ss).name, "mr . babar azam(captan)");
}
int main()
{
    teamPak babar;
    babar.age = 27;
    babar.run = 54688;
    strcpy(babar.name, " babar azam (wk) ");

    teamPak rizwan;
    rizwan.age = 29;
    strcpy(rizwan.name, "moh rizwan");
    rizwan.run = 56328;

    printf("%d \n", babar.age);
    printf("%d \n", babar.run);
    puts(babar.name);
    printf("\n");
    teamPak *pp = &babar;

    changevalue(&babar);
    printf("%d \n", babar.age);
    printf("%d \n", babar.run);
    puts(babar.name);
    return 0;
}