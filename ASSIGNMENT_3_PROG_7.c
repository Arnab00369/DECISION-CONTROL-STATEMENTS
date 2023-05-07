#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,D;
    printf("Enter the co-efficients a,b, and c ::\na = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    printf("c = ");
    scanf("%f",&c);
    printf("The Roots of the Quadratic Equation of given co-efficients ");
    D=(b*b)-(4*a*c);
      if(D==0)
        printf("are Real and Equal");
      else if(D>0)
        printf("are Real and Distinct");
      else if(D<0)
        printf("are Imaginary");
    return 0;
}
