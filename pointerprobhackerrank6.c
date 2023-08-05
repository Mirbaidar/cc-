#include<stdio.h>
#include<string.h>
void point(int *a, int *b){
    int sum , diff;
    sum = *a + *b;
    diff = *a - *b;
      *a = sum;
     *b = diff ;
}
int main(){
    int a =4 , b=6 ;
   int* ap = &a ; int* bp = &b ;
    point(ap,bp);
   printf("%d %d", a ,b);

    return 0;
}