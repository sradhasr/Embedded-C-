/* code to evaluate quadratic equation*/

#include<stdio.h>
#include<math.h>  //for finding square root 


void solveQuadraticEqn(float a,float b,float c)
{
    float discriminant,root1,root2,root3;

    discriminant=b*b -(4*a*c);  //finding the discriminant

    //check the value of discriminant
    if (discriminant >0){
        root1=(-b + sqrt(discriminant))/(2*a);
        root2=(-b - sqrt(discriminant))/(2*a);
        printf("Two distinct real roots : %.2f , %.2f \n",root1,root2);

    }
    else if(discriminant ==0)
    {
        root3=-b/(2*a);
        printf("One real toot: %.2f ",root3);
    }
    else   //discriminant <0 will give complex roots .
    {
        float realpart = -b/(2*a);
        float imaginarypart =sqrt(-discriminant)/(2*a);
        printf("Two complex roots : %.2f +  %.2fi AND %.2f -  %.2fi \n ",realpart,imaginarypart,realpart,imaginarypart);

    }
}



void main()
{
    //let the equation is ax^2+bx+c then 
    float a,b,c;
    printf("enter the co-efficent of x^2 :");
    scanf("%f",&a);
    printf("enter the co-efficent of x :");
    scanf("%f",&b);
    printf("enter the co-efficent of 1 :");
    scanf("%f",&c);

    solveQuadraticEqn(a,b,c);  //call the function to solve equation

    
}



