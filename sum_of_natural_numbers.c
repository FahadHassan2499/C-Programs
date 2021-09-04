#include<stdio.h>

int main(){
    int n,sum;
    printf("Enter the last natural number to which you want the sum\n");
    scanf("%d",&n);
    sum = n*(n+1)/2;
    printf("Sum of first %d natural numbers is %d",n,sum);
    return 0;
}