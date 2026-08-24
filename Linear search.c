#include<stdio.h>
int searchkey(int arr[],int key,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==key)
           return i;
    }
}
int main(){
    int n,key;
    printf("Enter an array size");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:");
    for(int i=0;i<n;i++)
       scanf("%d",&arr[i]);
    printf("Enter key to search:");
    scanf("%d",&key);
    int pos=searchkey(arr,key,n);
    printf("Key %d is found at position %d",key,pos+1);
}
