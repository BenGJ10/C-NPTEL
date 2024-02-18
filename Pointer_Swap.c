// A program which swaps two numbers using pointers.
#include <stdio.h>
void swap(int *ptr1, int *ptr2);
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("The numbers before swapping: %d %d\n",a,b);
    swap(&a,&b);
    printf("The numbers after swapping: %d %d\n",a,b);
    return 0;
}
void swap(int *ptr1, int *ptr2){
    int *ptrt;
    *ptrt = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = *ptrt;
}