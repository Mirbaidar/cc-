#include <stdio.h>


#define maxsize 10
int queue[maxsize];



int front = 0,rear = -1;

void insert();
void delete1();
void display();

int main()
{
    int choice;

    printf("-------queue-------");
    printf("\n 1.insert \n 2.delete \n 3.display \n");
   
do{
    printf("\nEnter your choice ");
    scanf("%d",&choice);

   switch (choice)
   {
   case 1:insert();break;
   case 2:delete1();break;
   case 3:display();break;
   default:printf("invalid choice ");
    break;
   }
   }while(choice <= 3);
    return 0;
}



void insert(){
    int n;
    if(rear == maxsize-1){
        printf("Queqe is overflow \n");
    }else{
       printf("Enter the element : ");
       scanf("%d",&n);
       rear++;
       queue[rear]=n;
    }
}



void display(){
    if(front > rear){
        printf("Queeqe is empty \n");
    }else{
        printf("Queeqe elements are as follows : \n");
        for(int i=front;i<=rear;i++){
            printf("%d   ",queue[i]);
        }
    }
}




void delete1(){
    int deleted_ele;
    if(front > rear){
        printf("queeue is empty . here are no elements in Queeqe :");
    }else{
     deleted_ele = queue[front];
     printf("deleted element : %d", deleted_ele);
     front++;
    }
}