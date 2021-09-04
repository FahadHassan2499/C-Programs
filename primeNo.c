#include<stdio.h>

int main(){
    int num, isPrime=1;
    printf("Enter the number\n");
    scanf("%d",&num);
    if(num == 1){
        printf("neither prime nor composite\n");
    }
    else{
        for(int i=2 ; i*i <= num ; i++){
            if(num % i == 0){
                isPrime=0;
            }
        }
        if(isPrime){
            printf("It is a prime number\n");
        }
        else
            printf("It is not a prime number\n");
    }
    return 0;
}