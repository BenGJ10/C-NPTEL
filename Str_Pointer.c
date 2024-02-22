#include <stdio.h>
int main(){
    char str[] = "Ben loves Anna";
    char *ptr = str+9;
    printf("%s\n",ptr);
    printf("%c\n",str[10]);
    return 0;
}