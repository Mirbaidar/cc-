#include<stdio.h>
#include<string.h>
int main(){
    int arr [7]={1,2,3,4,3,5,2};

    int visit[7]={0,0,0,0,0,0,0};
    for(int i=0;i<7;i++){
        visit[i]=arr[i];
    }
    for(int j=0;j<7;j++){
        printf("%d",visit[j]);
    }
    return 0;
}