#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number ::\nN = ");
    scanf("%d",&n);
    if(n%7==0)
       printf("%d is divisible by 7",n);
    else if(n%3==0)
        printf("%d is divisible by 3",n);
    else
       printf("%d is not divisible by either 7 or 3",n);
    return 0;
}

