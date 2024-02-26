// Using recursion, find the maximum of the numbers in an array.
#include <stdio.h>
int max_array(int a[],int num){
    int maxval;
    if(num==0)
        return -9999;
    if(num==1)
        return a[0];
    maxval = max_array(a+1,num-1);
    return (a[0]>maxval ? a[0] : maxval);
}
int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    int array[size];
    for(int i=0; i<size; i++){
        printf("Enter a number: ");
        scanf("%d",&array[i]);
    }
    printf("The maximum value found is: %d\n",max_array(array,size));
    return 0;
}