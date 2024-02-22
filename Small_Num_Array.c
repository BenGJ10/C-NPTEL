/* Given two arrays of positive integers, write a C Program to output 
   the smallest number in the first array that is also present in the second one. */
#include <stdio.h>
int main(){
    int size1, size2;
    printf("Enter the size of first array: ");
    scanf("%d",&size1);
    int arr1[size1];
    for(int i=0; i<size1; i++){
        printf("Enter the element: ");
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of second array: ");
    scanf("%d",&size2);
    int arr2[size2];
    for(int i=0; i<size2; i++){
        printf("Enter the element: ");
        scanf("%d",&arr2[i]);
    }
    int smallest = -1;
    for(int i = 0; i<size1; i++){
        for(int j=0; j<size2; j++){
            if(arr1[i]==arr2[j]){
                if(smallest == -1 || arr1[i]<smallest){
                    smallest = arr1[i];
                }
            }
        }
    }
    printf("The smallest common number is: %d\n",smallest);
    return 0;
}