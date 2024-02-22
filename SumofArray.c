// C program to print characters in an array in reverse order...
#include <stdio.h>
int main(){
    char s[100];
    int i, ch, count=0;
    ch = getchar();
    while(ch != EOF && count<100){
        s[count] = ch;  // Reading into array
        count +=1;
        ch = getchar();
    }
    i = count-1;
    while(i>=0){
        putchar(s[i]);  // Printing in Reverse
        i-=1;
    }
    return 0;
}