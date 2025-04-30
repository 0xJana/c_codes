#include <stdio.h>
#include <stdlib.h>
int main() {
    int s=0;
    int *sum =&s;
    int arr[5];
    int *ptr =arr;
    for(int i=0; i<5;i++){
        scanf("%d",&*(ptr + i));
        *sum+= *(ptr+i);
    }
    printf("sum=%d\n",*sum);
    return 0;
}
