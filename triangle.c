#include <stdio.h>
int main()
{
    int base, height, hp;
    printf("enter the base ,height and hp respectively");
         scanf("%d%d%d",&base,&height,&hp);
    if(base+height>hp && base+hp>height && height+hp>base){
        printf("using this configuratiuon we can  canstruct triangle");
    }else{
        printf("we can not const.");
    }
     return(0);
}