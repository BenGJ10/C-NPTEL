// C program that reverses the elements of an array using pointers.
#include <stdio.h>
void swap_num(int *a, int *b);
void reverse_array(int *arr, int num);
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    for(int i=0; i<size; i++){
        printf("Enter an element: ");
        scanf("%d",&array[i]);
    }
    reverse_array(array,size);
    printf("Reverse Array: ");
    for(int i=0; i<size; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}
void swap_num(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void reverse_array(int *arr, int num){
    int *start = arr;
    int *end = arr+num-1;
    while(start<end){
        swap_num(start,end);
        start++;
        end--;
    }
}