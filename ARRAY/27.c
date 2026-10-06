//Given a sorted array and a number X, search two elements of the array such
//that their sum is X. Expected time complexity is O(n).
#include<stdio.h>
int findpaird(int arr[],int x,int n){
    int l = 0;
    int r = n-1;
    while(l<r){
        int s = arr[l] + arr[r];
        if(s==x){
            printf("(%d,%d)\n",arr[l],arr[r]);
            return 1;
        }
        else if(s<x){
            l++;
        }else{
            r--;
        }
    }
    return 0;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int x = 7;
    if(!findpaird(arr,x,5)){
        printf("No pair found\n");
    }
    return 0;
}