/*
    ****
    *  *
    *  *
    ****
*/
#include<stdio.h>

int main(){
    int lines=10;
    for(int i=0 ; i<lines ; i++){
        for(int j=0 ; j<lines ; j++){
            if(i==0 || i==lines-1)
                printf("*");
            else {
                if(j==0 || j==lines-1)
                    printf("*");
                else
                    printf(" ");    
            }    
        }
        printf("\n");
    }
    return 0;
}