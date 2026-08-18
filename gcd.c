#include<stdio.h>
int gcd(int m,int n){
    while(n!=0){
        int r=m%n;
        m=n;
        n=r;
    }
    return m;
}
int main(){
    int m,n,res;
    printf("Enter two numbers to find GCD:");
    scanf("%d %d",&m,&n);
    res=gcd(m,n);
    printf("%d",res);
    
}
