/* A steel manufacturing company decides grade of steel from following standards.
    1) Carbon content must be less than 0.8.
    2) Hardness must be greater than 11.2.
    3) Tensile strenght must be greater than 14.6.
 Write a program to accept a values of carbon content, hardness and tensile strenght from the lab incharge
 and decide grade of steel from following conditions.
    - Grade is A if all three standard are met.
    - Grade is B if 1 and 2 are met.
    - Grade is C if 2 and 3 are met.
    - Grade is D if 1 and 3 are net.
    - Grade is E if any one standard is met.
    - Grade is F if no standard is met.
*/
#include <stdio.h>
#include <conio.h>
int main()
{
    float cc, ts, h;
    int flag1=1, flag2=1, flag3=1;
    printf("Enter value of carbon content :- ");
    scanf("%f", &cc);
    printf("\nEnter  value of hardness :- ");
    scanf("%f", &h);
    printf("\nEnter value of tensile strenght :- ");
    scanf("%f", &ts);
    if (cc < 0.8)
    {
        flag1++;
    }
    if (h > 11.2)
    {
        flag2++;
    }
    if (ts > 14.6)
    {
        flag3++;
    }
    if (flag1 == 2 && flag2 == 2 && flag3 == 2)
    {
        printf("\nGrade of steel :- A");
    }
    if (flag1 == 2 && flag2 == 2 && flag3 == 1)
    {
        printf("\nGrade of steel :- B");
    }
    if (flag1 == 1 && flag2 == 2 && flag3 == 2)
    {
        printf("\nGrade of steel :- C");
    }
    if (flag1 == 2 && flag2 == 1 && flag3 == 2)
    {
        printf("\nGrade of steel :- D");
    }
    if ((flag1 == 1 && flag2 == 1 && flag3 == 2) || (flag1 == 1 && flag2 == 2 && flag3 == 1) || (flag1 == 2 && flag2 == 1 && flag3 == 1))
    {
        printf("\nGrade of steel :- E");
    }
    if (flag1 == 1 && flag2 == 1 && flag3 == 1)
    {
        printf("\nGrade of steel :- F");
    }
    getch();
    return 0;
}