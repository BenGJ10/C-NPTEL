// Write a C program for the Collatz function using Recursion.
#include <stdio.h>
int Collatz(int num){
    if(num==2)
        return 1;
    else if (num==1)
        return 0;
    else if((num>2) && (num%2==0))
        return Collatz(num/2)+1;
    else 
        return Collatz((3*num)+1)+1;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int result = Collatz(num);
    printf("%d\n", result);
    return 0;
}