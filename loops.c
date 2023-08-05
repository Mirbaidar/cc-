#include <stdio.h>
int main()
{
    int mm, cm, m;
    
    printf("enter the length in mili meters");
    scanf("%d", &mm);

    cm = mm / 10;
    printf("%d milimeters is equal to %d cm \n ",mm ,cm);

    m = cm / 100;
    printf("%dmilimeters  is equal to %d meter \n ",mm, m);

    return 0;
}