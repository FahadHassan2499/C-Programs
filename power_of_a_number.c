#include<stdio.h>

long long int power(int m , int n){
    long long int p = 1;
    while(n){
        p = p * m;
        n--;
    }
    return p;
}

int main(){
    int m = 10;
    int n = 12;
    long long int p  = power(m,n);
    printf("%d raise to the power %d is %lld",m,n,p);
    return 0;
}