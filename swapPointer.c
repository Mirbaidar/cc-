#include<stdio.h>
swap(int first, int second);

int main(){
    int first;
    printf("enter the number first");
        scanf("%d",&first);

int second;
    printf("enter the number second");
        scanf("%d",&second);  

    swap(20,10);          
    return 0;
}

swap(int first, int second){
    int z=first;
    first=second;
    second=z;
    return;

}