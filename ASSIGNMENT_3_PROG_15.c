#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number ::\nN = ");
    scanf("%d",&n);
    if(n>0)
    printf("%d is a Positive Number",n);
    else if(n<0)
    printf("%d is a Negative Number",n);
    else
    printf("%d is Neither a Positive Number nor a Negative Number",n);
    return 0;
}
