//in c program an array with input 100,80,70,60,75,85 which gives output as 1,1,1,1,3,5
#include<stdio.h>
void span(int arr[],int n,int price[]){
    int i,j;
    for(i=0;i<n;i++){
        arr[i] = 1;
        for(j = i-1;j>=0;j--){
            if(price[j]<=price[i]){
                arr[i]++;
            }else{
                break;
            }
        }
    }
    
}
int main(){
    int n;
    printf("enter the size: ");
    scanf("%d",&n);
    int i,arr[n],price[n];
    for(i=0;i<n;i++){
        scanf("%d",&price[i]);
    }
    span(arr,n,price);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}