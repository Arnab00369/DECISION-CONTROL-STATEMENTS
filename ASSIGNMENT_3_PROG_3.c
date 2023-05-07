#include <stdio.h>
int main()
{
    int N;
    printf("Enter a Number ::\nN = ");
    scanf("%d",&N);
    if(N%2==0)
        printf("%d is an Even Number",N);
    else
        printf("%d is a Odd Number",N);
    return 0;
}
