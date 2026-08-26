#include<stdio.h>
int arrayInsertion(int n,int arr[]){
    printf("Enter array elements:");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    return arr;
}
int main(){
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    arrayInsertion(n,&arr);
    printf("The array: ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}
