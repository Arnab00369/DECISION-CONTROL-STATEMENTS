#include <stdio.h>
int main()
{
    int a,b,max;
    printf("Enter the value of two numbers ::\nA = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);
    max=(a>b)?a:b;
    if(a==b)
        printf("Output :: %d as both the numbers are same",a);
    else
        printf("The greater of two numbers are :: %d",max);
    return 0;
}
