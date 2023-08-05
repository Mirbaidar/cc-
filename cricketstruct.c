#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct cricketer
    {
        char name[25];
        int age;
        int notestmatches;
        float averagerun;
    } cricketer;
    cricketer arr[3];

    for (int i = 0; i < 3; i++)
    {
        printf("enter the name of crickter no.= %d  \n", i);
        scanf("%s",arr[i].name);

        scanf("%d", &arr[i].age);

        scanf("%d", &arr[i].notestmatches);

        scanf("%f", &arr[i].averagerun);
    }

    for(int j=0;j<3;j++){
        printf(" NAME: %s\n",arr[j].name);
        printf("AGE :%d\n",arr[j].age);
        printf("NUMBER OF MATCHES:%d\n",arr[j].notestmatches);
        printf("AVERAGE RUN: %f\n",arr[j].averagerun);
        printf("\n");
    }

    return 0;
}