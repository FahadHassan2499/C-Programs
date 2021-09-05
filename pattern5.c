/*
    ****
     ***
      **
       *
*/
#include<stdio.h>

int main(){
    int lines=10;
    for(int i=0 ; i<lines ; i++){
        for(int j=0 ; j<lines ; j++){
            if(j>=i)
                printf("*");
            else
                printf(" ");    
        }
        printf("\n");
    }
    return 0;
}