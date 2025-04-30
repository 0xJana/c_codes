#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

int max(int *arr,int size){
    int maxVlue =arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>maxVlue){
            maxVlue = arr[i];
        }
    }
    return maxVlue;
}
int main(){
    int arr[SIZE];
    int *ptr=arr;
    printf("Enter the numbers of the array: ");
    for(int i=0;i<SIZE;i++){
        scanf("%d",&arr[i]);
    }
    printf("The maximum value in the array is: %d\n",max(ptr,SIZE));
}
