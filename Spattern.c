/**
 * @ Author : Sradha S R
 * @ Create Date : 04-10-2024
 * @ Description : Code to write the alphabet 'S' using '*' Symbol
 * @ Revisions :0
 
  
*/



#include<stdio.h>

void main(){
    int n=11;                                                // value of 'n' is a odd number greater than 5

    for (int i=0;i<n;i++){                                   //for the upper part 
        if(i==0){
            for (int j=0;j<n;j++){
                printf("*");
            }
        }                          
        else if (i == n / 2) {                              //for the middle part
            for (int j = 0; j < n; j++) {
                printf("*");
            }
        }else if (i == n - 1) {                            //for the bottom part
            for (int j = 0; j < n; j++) {
                printf("*");
            }    
        }
        else if (i < n / 2) {                             //for the left and right joinings
            printf("*");
        } else {
            for (int j = 0; j < n - 1; j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
       
}



