#include <stdio.h>
int main()
{
    int yr;
    printf("Enter a year to check whether it is a leap year or not ::\nYEAR = ");
    scanf("%d",&yr);
    if(yr%100==0)
    {
        if(yr%400==0)
            printf("%d is a Leap Year",yr);
        else
            printf("%d is not a Leap year",yr);
    }
    else
    {
        if(yr%4==0)
            printf("%d is a Leap Year",yr);
        else
            printf("%d is not a Leap Year",yr);

    }
    return 0;
}
