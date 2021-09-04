#include<stdio.h>
int factorial(int n){
    if(n==0)
        return 1;
    return n * factorial(n-1);    
}
int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    int fact=factorial(num);
    printf("Factorial is %d",fact);
    return 0;
}