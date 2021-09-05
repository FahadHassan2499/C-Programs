/*   
       *
      **
     ***
    ****
*/

#include<stdio.h>

int main(){
    int lines=4;
    for(int i=0 ; i<lines ; i++){
        for(int j=0; j<lines; j++){
            if(j>=lines-i-1)
                printf("*");
            else
                printf(" ");    
        }
        printf("\n");
    }
    return 0;
}