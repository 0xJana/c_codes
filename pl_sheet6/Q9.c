#include <stdio.h>
#include <stdlib.h>

int digits(char *str)
{
    if(*str == '\0'){
        return 0;
    }
    else{
         if(*str>=0 && *str<=9){
             return 1 + digits(str+1);
        }
        else{
            return digits(str+1);
        }
}}
int main(){
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    char *ptr = str;
    if(digits(ptr)){
        printf("The string contains digits\n");
    }
    else{
        printf("The string does not contain digits\n");
    }
}
