#include <stdio.h>
#include <stdlib.h>
int main(){
    int arr[5];
    int *ptr = arr;
    printf("Enter the numbers of the array: ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("arr[0]=%d\n",*ptr);
    printf("arr[1]=%d\n",*(ptr+1));
    printf("arr[2]=%d\n",*(ptr+2));
    printf("arr[3]=%d\n",*(ptr+3));
    printf("arr[4]=%d\n",*(ptr+4)); 
}
