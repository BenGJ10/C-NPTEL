/* Write a C program to count the number of successive pairs
   of numbers that are relatively prime..   */
#include <stdio.h>
int iscoprime(int a, int b);
int main(){
    int prev, curr;
    int i, num, count = 0;
    printf("Enter no of total numbers to be inputted: ");
    scanf("%d",&num);
    printf("Enter a number: ");
    scanf("%d",&prev);
    for(i=1; i<num; i++){
        printf("Enter a number: ");
        scanf("%d",&curr);
        count = count + iscoprime(prev,curr);
        prev = curr;    
    }
    printf("The number of coprime sequences are: %d\n",count);
    return 0;
}
int iscoprime(int a, int b){
    int temp;
    if(a<b){    // Code for calculating GCD of two numbers
        temp = a;
        a = b;
        b = temp;}
    while(b!=0){
        temp = b;
        b = a%b;
        a = temp;
    }
    if(a==1)
        return 1;
    else
        return 0;
}