#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of two numbers ::\nA = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    printf("C = ");
    scanf("%d",&c);
    if((a>=b)&&(b>=c))
       printf("The greatest of the three numbers is :: %d",a);
    else if((b>=a)&&(a>=c))
       printf("The greatest of the three numbers is :: %d",b);
    else if(a==b==c)
         printf("Output :: %d as all the three numbers are same",a);
    else if((c>=a)&&(c>=b))
       printf("The greatest of three numbers is :: %d",c);
    return 0;
}
