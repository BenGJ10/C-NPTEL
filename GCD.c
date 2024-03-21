// Program showcasing Euclid's algorithm
#include <stdio.h>
int exchange(int a, int b){
    int t = a;
    a = b;
    b = t;
}
int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1, &num2);
    printf("GCD of %d and %d is: ",num1, num2);
    if(num2 >= num1){
        exchange(num1, num2);
    }
    while(num2 != 0){
        int g = num1 % num2;
        num1 = num2;
        num2 = g;
    }
    printf("%d\n",num1);
    return 0;
}