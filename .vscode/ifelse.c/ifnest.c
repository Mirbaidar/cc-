#include <stdio.h>
int main()
{
    int ram;
    printf("enter the age of ram:");
    scanf("%d", &ram);

    int shayam;
    printf("enter the age of shayam:");
    scanf("%d", &shayam);

    int ajay;
    printf("enter the age of ajay:");
    scanf("%d", &ajay);

    if (ram > shayam)
    {
        if (ram > ajay)
        {
            printf("ram is oldest");
        }
        else
        {
            printf("ajay is oldest");
        }
    }
    else
    {
        if(shayam>ajay){
            printf("shayam is greatesrt");
        }
    }


return 0;
}