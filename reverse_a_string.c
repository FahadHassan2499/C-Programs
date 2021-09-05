#include<stdio.h>

int main(){
    char str[20];
    printf("Enter a string\n");
    scanf("%s",str);
    int count=0,temp;
    while(str[count]!='\0'){
        count++;
    }
    for(int i=0 ; i<=(count-1)/2 ; i++){
        temp = str[i];
        str[i] = str[count-i-1];
        str[count-i-1] = temp;
    }
    printf("Reversed string is %s",str);
    return 0;
}