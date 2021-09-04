#include<stdio.h>

int main(){
    int num=34567;
    int count = 0;
    do{
        count++;
        num/=10;
    }while(num);
    printf("No. of digits = %d",count);
    return 0;
}