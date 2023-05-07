#include <stdio.h>
int main()
{
    int N,c=0,n1;
    printf("Enter a Number to check whether it is 3 Digit Number or not ::\nN = ");
    scanf("%d",&N);
    n1=N;
    while(N!=0)
    {
        N=N/10;
        ++c;
    }
    if(c==3)
        printf("%d is a %d Digit Number",n1,c);
    else
        printf("%d is not a 3 Digit Number, it is a %d Digit Number",n1,c);
    return 0;
}
