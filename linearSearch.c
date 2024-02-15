#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
bool flag = false;
void linearSEarch(int arr[],int n,int ele);
int main()
{
    int arr[20];
    int n;
    printf("enter the limit for array :");
    scanf("%d", &n);
    printf("\nEnter the array elements :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
   /* printf("...................array elements...............................\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }*/
    int elem;
    printf("\nEnter the element to search using linear search algorithm :");
    scanf("%d",&elem);
    linearSEarch(arr,n,elem);
    return 0;
}

void linearSEarch(int arr[],int n,int ele){
    int pos;
for(int i=0;i<n;i++){
    if(arr[i]== ele){
        flag = true;
        pos=i;
        break;
    }
}
if(flag==true){
    printf("searching success . element found \n arr[%d] = %d",pos,ele);
}else{
    printf("element not found \n");
}

}