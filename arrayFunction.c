#include<stdio.h>
void fun(int a[]){
printf("%d \n",a[2]);
printf("%d",a[3]);

}
int main(){
int arr[5] ={1,2,3,4,5};
      fun(arr);
    return 0;
}