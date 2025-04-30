#include <stdio.h>
#include <stdlib.h>

int space(char *str)
{
    if(*str == '\0'){
        return 0;
    }
    else{
         if(*str == ' '){
            return 1 + space(str+1);
    }
        else{
            return space(str+1);
    }
    }
}
int main(){
    char str[100];
    printf("Enter a string: ");
    for(int i=0;i<100;i++){
        scanf("%c",&str[i]);
        if(str[i] == '\n'){
            str[i] = '\0';
            break;
        }
    }
    printf("the number of spaces in the string is: %d\n",space(str));
}
