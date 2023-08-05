#include <stdio.h>
#include <string.h>
int main()
{
    struct baidar
    {
        int class;
        int roolno;
        char name[22];
        char profession[23];

    } baidarone, adil;

    strcpy(baidarone.name, "mr king");
    baidarone.roolno = 220409;
    baidarone.class = 12;
    strcpy(baidarone.profession, "software enginear");
    baidarone =adil;
    baidarone.class=14;
    printf("%s", baidarone.profession);
    printf("%d\n", baidarone.class);
    printf("%d", adil.class);

    return 0;
}