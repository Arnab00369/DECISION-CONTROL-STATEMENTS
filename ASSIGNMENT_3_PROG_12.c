#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Alphabet to check whether it is in Upper Case or in Lower Case ::\nAlphabet = ");
    scanf("%c",&ch);
    if(isupper(ch))
        printf("%c is is Upper Case",ch);
    else
        printf("%c is in Lower Case",ch);
    return 0;
}
