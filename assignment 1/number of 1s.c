/*code to check number of 1’s in the binary equivalent of a given number.*/

#include<stdio.h>

int countOnes();

void main()
{
    int num ,result;
    printf("enter the number to check: "); //TAKE THE NUMBER TO CKECK FROM USER
    scanf("%d",&num);
    result=countOnes(num);
    printf("Number of 1's in the given number : %d \n",result);

}
int countOnes(int N)

{
    int count=0;
    while(N>0){
        if(N & 1)    //For check if LSB is 1 or not
        {      
            count ++;
        }
        
        N >>=1 ; //Right shifting by 1 bit
    }
    return count;

}



