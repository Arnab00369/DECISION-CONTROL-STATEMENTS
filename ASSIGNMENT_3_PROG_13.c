#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number ::\nN = ");
    scanf("%d",&n);
    if(n%6==0)
       printf("%d is divisible by both 3 and 2",n);
    else
       printf("%d is not divisible by both 3 and 2",n);
    return 0;
}
