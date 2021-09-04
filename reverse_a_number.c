#include<stdio.h>

int main(){
    int num,rev=0,r;
    printf("Enter the number to be reversed\n");
    scanf("%d",&num);
    while(num){
        r = num%10;
        rev = rev*10 + r;
        num = num/10;
    }

    printf("Reversed Number is %d",rev);
    return 0;
}