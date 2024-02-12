// Calculate nCr of given inputs using functions..
#include <stdio.h>
int factorial(int num);
int main(){
    int n,k;
    int res;
    printf("Enter two numbers: ");
    scanf("%d %d",&n, &k);
    int t1, t2, t3;
    t1 = factorial(n);
    t2 = factorial(k);
    t3 = factorial(n-k);
    res = (t1/t2)/t3;
    printf("%dC%d is: ",n,k);
    printf("%d\n",res);
    return 0;
}
int factorial(int num){
    int i, fact = 1;
    for(i=1; i<=num; i++){
        fact = fact*i;
    }
    return fact;}