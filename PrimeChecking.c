/* Complete the function int is_prime(int n) to check if a positive number 
   n is prime or not. The function returns 1 if n is prime, and 0 otherwise. */
#include <stdio.h>
int is_prime(int n);
int main(){
    int num;
    printf("Enter the total number of digits: ");
    scanf("%d",&num);
    int digit;
    for(int i = 0; i<num; i++){
        printf("Enter a number: ");
        scanf("%d",&digit);
        if(is_prime(digit))
            printf("%d is prime\n",digit);
    }
    return 0;
}
int is_prime(int n){
    if(n<=1)
        return 0;   // 0 and 1 are not prime
    for(int i =2; i<n; i++)
        if(n%i==0)  // if remainder equals 0 then also it is not prime
            return 0;
    return 1;       // n is prime
}