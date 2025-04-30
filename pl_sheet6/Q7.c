#include<stdio.h>
#include<stdlib.h>
int len_str(char *s){
    if(*s == '\0'){
        return 0;
    }
    return 1 + len_str(s+1);
}
int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    char *ptr = str;
    int length = len_str(ptr);
    printf("Length of the string: %d\n", length);
}
