#include<stdio.h>

int main(){
    int num,fact=1;
    printf("Enter the number factorial of which is to be calculated\n");
    scanf("%d",&num);
    while(num){
        fact = fact * num;
        num--;
    }
    printf("Factorial is %d",fact);
    return 0;
}