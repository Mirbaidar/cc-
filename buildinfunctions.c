#include <stdio.h>
#include <string.h>
int main()
{
    // retrurns length of string
    char str[] = "mir baidar";
    int x = strlen(str);
    printf("%d \n", x);
    // provides deep copy
    char s1[12] = "zaid shabir";
    char s2[12];
    strcpy(s2, s1);
    printf("%s \n", s2);
    // concats two strings
    char s3[14] = "zaid shabir";
    char s4[12] = "zeenat";
    strcat(s3, s4);
    printf("%s", s3);
    return 0;
}