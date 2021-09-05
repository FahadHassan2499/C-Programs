// #include<stdio.h>
// int main(){
//     int k;
//     k=3;
//     int low=1;
//     int high=2*k-1;
//     int mid=(low+high)/2;
//     for(int i=low;i<=k;i++){
//         for(int j=low;j<=mid;j++){
//             if(j==mid || i+j>k){
//                 printf("*");
//             }
//             else
//                 printf(" ");
//         }
//         for(int l=mid+1;l<=high;l++){
//             if(l-i<k){
//                 printf("*");
//             }
//             else
//                 printf(" ");
//         }
        
//         printf("\n");
//     }

// }


/*
            *
           ***
          *****
*/

#include<stdio.h>

int main(){
    int lines=3;
    for(int i=0 ; i<lines ; i++){
        for(int j=0 ; j<2*lines-1 ; j++){
            if(j>=lines-1-i && j<=lines-1+i)
                printf("*");
            else
                printf(" ");    
        }
        printf("\n");
    }
    return 0;
}