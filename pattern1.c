// 5432*
// 543*1
// 54*21
// 5*321
// *4321

#include<stdio.h>
int main(){
    int lines;
    lines=5;
    int count=lines;
    for(int i=1;i<=lines;i++){
        for(int j=1;j<=lines;j++){
            if(j==count){
                printf("*");
                count--;
            }
            else{
                printf("%d",lines-j+1);
            }
        }
        printf("\n");
    }
    return 0;
}