#include <stdio.h>
int main()
{
    int N;
    printf("Enter a Number ::\nN = ");
    scanf("%d",&N);
    if(N%5==0)
        printf("%d is divisible by 5",N);
    else
        printf("%d is not divisible by 5",N);
    return 0;
}
