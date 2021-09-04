#include<stdio.h>

int main(){
    int num,a[4],i=0,r;
    printf("Enter the number which is to be converted into binary\n");
    scanf("%d",&num);
    while(num!=0){
        r = num%2;
        a[i] = r;
        num = num/2;
        i++;
    }
    for(int j=i-1 ; j>=0; j-- ){
        printf("%d",a[j]);
    }
    return 0;
}