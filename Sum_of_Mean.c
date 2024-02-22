/* Given an array of positive integers, write a C Program to output 
   the sum of the elements that are above the mean. */
#include <stdio.h>
int main(){
    int num, sum=0, above_mean_sum = 0;
    printf("Enter the size of array: ");
    scanf("%d",&num);
    int arr[num];
    for(int i=0; i<num; i++){       // Input the elements of the array
        printf("Enter the elements: ");
        scanf("%d",&arr[i]);
        sum += arr[i];}
    float mean = (float)sum/num;    // Calculating the mean
    for(int i = 0; i<num; i++){
        if(arr[i]>=mean)
            above_mean_sum += arr[i];}
    printf("The sum of elements above mean lvl is : %d\n",above_mean_sum);

    return 0;
}