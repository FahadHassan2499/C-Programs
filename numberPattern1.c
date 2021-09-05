/*
        0000000
         111111
          22222
           3333
            444
             55
              6
*/

#include<stdio.h>

int main(){
    int lines=9;
    for(int i=0 ; i<lines ; i++){
        for(int j=0 ; j<lines ; j++){
            if(j>=i)
                printf("%d",i);
            else
                printf(" ");    
        }
        printf("\n");
    }
    return 0;
}