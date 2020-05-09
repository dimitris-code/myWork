#include <stdio.h>
#include <stdlib.h>
#include <math.h>   //library for math calculations


//function with the name 'd' which accepts three 'double' size variables and returns a double size value
double d(double a, double b, double c){

    double descriminant;

    descriminant = b * b - 4 * a * c;   //math function is given

    return descriminant;
}
int main()
{
    double a, b, c, root1, root2, realPart, imaginaryPart;

    printf("****************************************\n");
    printf("**** Quadratic Equations Calculator ****\n");
    printf("****************************************\n\n");

    printf("Insert three real numbers where the first one is NOT equal to 0(zero),\nand I will calculate the descriminant and the roots of the equation\n\n");

    printf("Enter 1st number: ");
    scanf("%lf", &a);
    printf("Enter 2nd number: ");
    scanf("%lf", &b);
    printf("Enter 3rd number: ");
    scanf("%lf", &c);

    printf("descriminant = %.2lf\n\n", d(a,b,c));  //instead of creating a new variable and assign
                                                // it just to functionCall, we can include the call of the function as a parameter in a printf() statement

    /* if the descriminant is > 0, the result is real with different roots
       else if descriminant is = 0, the result is one real root
       else if descriminant is < 0, the result is a real part and an imaginary one, i.e  39 + 3i  where i = sqrt(-1)
    */

    //real and different roots
    if(d(a,b,c) > 0){
        root1 = (- b + sqrt(d(a,b,c))) / (2 * a);  //sqrt() is a standard library function. It returns the square root. / The math function is given
        root2 = (- b - sqrt(d(a,b,c))) / (2 * a);

        printf("Root1 = %.2lf\nRoot2 = %.2lf\n", root1, root2);
    }

    //real and equal roots
    else if(d(a,b,c) == 0){
        root1 = root2 = - b / (2 * a);   //math function is given

        printf("Root1 = Root2 = %.2lf\n", root1);
    }

    //complex number and different roots
    else{
        realPart = - b / (2 *a);  //math function is given
        imaginaryPart = sqrt(-(d(a,b,c))) / (2 * a);  

        printf("Root1 = %.2lf + %.2lfi\nRoot2 = %.2f - %.2fi\n\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }


    getch();
    return 0;
}
