#include <stdio.h>
int blockSum(int M[], int n){
    if(n==2)
        return M[0] - M[1];
    else{
        int mid = n/2;
        int blockSum_A = blockSum(M, mid);
        int blockSum_B = blockSum(M + mid, mid);
        return blockSum_A - blockSum_B;
    }
}
int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    for(int i =0; i<size; i++){
        scanf("%d", &array[i]);
    }
    printf("%d\n", blockSum(array,size));
    return 0;
}