// You have to output the two moving average of a sequence of non-negative numbers.
#include <stdio.h>
int main(){
    int prev, curr;
    printf("Enter a number: ");
    scanf("%d",&prev);
    printf("Enter a number: ");
    scanf("%d",&curr);
    printf("The average is: %.1f\n",(prev+curr)/2.0);
    while(curr!=-1){
        prev = curr;
        printf("Enter a number: ");
        scanf("%d",&curr);
        if(curr==-1)
            break;
        printf("The average is: %.1f\n",(prev+curr)/2.0);
    }
    return 0;
}