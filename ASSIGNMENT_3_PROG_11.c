#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter your Marks in Five Subjects ::\n1> Mathematics\t\t\t= ");
    scanf("%d",&a);
    printf("2> English\t\t\t= ");
    scanf("%d",&b);
    printf("3> Physics\t\t\t= ");
    scanf("%d",&c);
    printf("4> Chemistry\t\t\t= ");
    scanf("%d",&d);
    printf("5> Computer Applications\t= ");
    scanf("%d",&e);
    if((a>=33)&&(b>=33)&&(c>=33)&&(d>=33)&&(e>=33))
        printf("You have Passed !!");
    else if((a<33)||(b<33)||(c<33)||(d<33)||(e<33))
        printf("Sorry !! You have Failed ");
    else if((a>100)||(b>100)||(c>100)||(d>100)||(e>100))
        printf("ERROR !!!! Your Marks cannot EXCEED 100 ");
    else if((a<0)||(b<0)||(c<0)||(d<0)||(e<0))
        printf("ERROR !!!! Your Marks cannot be NEGATIVE ");
    return 0;
}
