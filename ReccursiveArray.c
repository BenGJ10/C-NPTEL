// Check whether a given key exists in an array or not
#include <stdio.h>
int searchKey(int a[],int n, int key){
    if(n==0)
        return -1;
    if(a[0] == key)
        return 1;
    else{
        int result =  searchKey(a+1,n-1,key);
        if(result == -1)
            return -1;
        else
            return result;
    }
}
int main(){
    int key,size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int array[size];
    for(int i=0; i<size; i++){
        printf("Enter an element: ");
        scanf("%d",&array[i]); 
    }
    printf("Enter the key: ");
    scanf("%d",&key);
    int result = searchKey(array,size,key);
    if(result != -1)
        printf("The Key has been found!\n");
    else
        printf("The Key is not present in this array.\n");
    return 0;
}