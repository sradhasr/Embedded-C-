/**
 * @ Author : Sradha S R
 * @ Create Date : 02-10-2024
 * @ Description: C Program to check number of 1’s in the binary equivalent of a given number.
 * @ Revisions :0
 
  
*/

#include<stdio.h>

int countOnes();

void main()
{
    int num ,result;
    printf("enter the number to check: ");                          //Take the input from user 
    scanf("%d",&num);
    result=countOnes(num);
    printf("Number of 1's in the given number : %d \n",result);

}
//Function to find number of 1's in a binary equivalent of a decimal number
int countOnes(int N)

{
    int count=0;
    while(N>0){
        if(N & 1)                                                   //Check if LSB is 1 or not
        {      
            count ++;
        }
        
        N >>=1 ;                                                    //Right shifting by 1 bit
    }
    return count;

}



