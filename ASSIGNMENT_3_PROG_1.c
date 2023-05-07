#include <stdio.h>
int main()
{
    int N;
    printf("Enter a Number ::\nN = ");
    scanf("%d",&N);
    if(N>0)
        printf("%d is Positive",N);
    else if(N<0)
        printf("%d is Negative",N);
    else
        printf("%d is neither Positive nor Negative",N);
    return 0;
}

