#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Character ::\nCharacter = ");
    scanf("%c",&ch);
    if(isalpha(ch))
    {
        if(isupper(ch))
        printf("%c is a Upper Case Alphabet",ch);
        else
        printf("%c is a Lower Case Alphabet",ch);
    }
    else if(isdigit(ch))
        printf("%c is a Digit",ch);
    else
        printf("%c is a Special Character",ch);
    return 0;
}
