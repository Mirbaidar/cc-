#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct book
    {
        char name[50];
        int price;
        int pages;
    } csee;
    // struct book cpg;   following are its alternativee ways;ss
    csee cpg;
    csee javascrit;
    csee css;
    strcpy(cpg.name, "fandamentels through c");
    printf("%s", cpg.name);

    return 0;
}