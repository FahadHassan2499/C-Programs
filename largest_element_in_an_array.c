#include<stdio.h>

int returnMax(int arr[],int n){
    int max=0;
    for(int i=0 ; i<n  ; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int arr[]={23,45,67,343,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max=returnMax(arr,n);
    printf("Largest Element is %d",max);
    return 0;
}