#include <stdio.h>
int main()
{
    int N;
    printf("Enter a Number ::\nN = ");
    scanf("%d",&N);
    if((N-1)==(N^1))
        printf("%d is Odd Number",N);
    else
        printf("%d is an Even Number",N);
    return 0;
}
