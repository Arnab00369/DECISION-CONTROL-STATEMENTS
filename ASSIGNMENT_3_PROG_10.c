#include <stdio.h>
int main()
{
    float cp,sp,pp,lp;
    printf("Enter the Cost Price of the product ::\nCOST PRICE = Rs. ");
    scanf("%f",&cp);
    printf("SELL PRICE = Rs. ");
    scanf("%f",&sp);
    if(sp>cp)
    {
        pp=((sp-cp)/cp)*100;
        printf("The Profit Percentage of the Product is = %.2f%%",pp);
    }
    else if(cp>sp)
    {
        lp=((cp-sp)/cp)*100;
        printf("The Loss Percentage of the Product is = %.2f%%",lp);
    }
    else
        printf("No Profit No Loss");
   return 0;
}
