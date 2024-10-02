/**
 * @ Author : Sradha S R
 * @ Create Date : 02-10-2024
 * @ Description : C Program  to evaluate quadratic equation
 * @ Revisions :0
 
  
*/

#include<stdio.h>
#include<math.h>                                                                //for finding square root 

void main()
{
    //Assume the quadratic equation is ax^2+bx+c 

    float a,b,c,discriminant,root1,root2,root3;
    printf("enter the co-efficent of x^2 : \n");
    scanf("%f",&a);
    printf("enter the co-efficent of x : \n");
    scanf("%f",&b);
    printf("enter the co-efficent of 1/ enter the value of 'c' :  \n");
    scanf("%f",&c);


    discriminant=b*b -(4*a*c);                                                  //finding the discriminant using mathematical formula

                                                                                //check the nature of discriminant 
    if (discriminant >0){
        root1=(-b + sqrt(discriminant))/(2*a);                                  //finding the root value using mathematical formula
        root2=(-b - sqrt(discriminant))/(2*a);
        printf("Two distinct real roots : %.2f , %.2f \n",root1,root2);

    }
    else if(discriminant ==0)
    {
        root3=-b/(2*a);
        printf("One real toot: %.2f ",root3);
    }
    else                                                                         //discriminant less than 0 will give complex roots of the form (x+iy)
    {
        float realpart = -b/(2*a);
        float imaginarypart =sqrt(-discriminant)/(2*a);
        printf("Two complex roots : %.2f + %.2fi AND  %.2f - %.2fi \n ",realpart,imaginarypart,realpart,imaginarypart);

    }   
}