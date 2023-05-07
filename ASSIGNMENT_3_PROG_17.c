#include <stdio.h>
int main()
{
    float a,b,c;
    printf("Enter three sides of a Triangle ::\nA = ");
    scanf("%f",&a);
    printf("B = ");
    scanf("%f",&b);
    printf("C = ");
    scanf("%f",&c);
    if((a+b<c)||(b=c<a)||(a+c<b))
        printf("The Triangle is Valid with Sides of Length %.2f units,%.2f units and %.2f units",a,b,c);
    else
        printf("The Triangle is Invalid");
    return 0;
}
