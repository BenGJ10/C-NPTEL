#include <stdio.h>
int main(){
    char str[]= "My name is BEN";
    str[2]='\0';
    printf("%s\n",str);
    int i;
    for(i=0; i<=13; i++){
        putchar(str[i]);
    }  
    return 0;
}