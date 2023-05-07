#include <stdio.h>
int main()
{
    int m_no;
    int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Enter the Month Number ::\n1-January,2-February,3-March,4-April,5-May,6-June,7-July,8-August,9-September,10-October,11-November,12-December\nMonth No. = ");
    scanf("%d",&m_no);

    if((m_no==0)||(m_no>12))
        printf("ERROR!!!!Your Month number is INVALID");
    else
        printf("The number of days in Month Number %d is = %d days",m_no,month[m_no-1]);
    return 0;
}
