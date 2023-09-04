#include <stdio.h>
int max=-1;

void push(int arr[],int enter){
    max = max+1;
      arr[max] = enter;
}

int main(){
    int arr[10];
    int a,addEelNo;
    printf("enter the number of elements yoou wanna push in stack :");
    scanf("%d",&addEelNo);

    for(int add=0;add<addEelNo;add++){
       printf("enter the element at index arr[%d] = ",add);
       scanf("%d",&a);
        push(arr,a);
    }
    

//here the print of stack is performed
int more = max;
    for(int i=0;i<=more;i++){
        printf("%d ",arr[i]);
    }
    return  0;
}

