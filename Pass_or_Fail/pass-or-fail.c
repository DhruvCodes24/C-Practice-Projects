#include<stdio.h>
int main()
{
    float eng, maths, phy, chem, comp, total, per;
    int class, roll;
    char name[30];
    printf("Enter your Name \n");
    fgets(name, sizeof(name), stdin);
    printf("Enter Class \n");
    scanf("%d", &class );
    printf("Enter Roll NO \n");
    scanf("%d", &roll);

    printf("Enter Your Englsih Marks \n");
    scanf("%f", &eng);
    printf("Enter Your Mathematics Marks \n");
    scanf("%f", &maths);
    printf("Enter Your Physics Marks \n");
    scanf("%f", &phy);
    printf("Enter Your Chemistry Marks \n");
    scanf("%f", &chem);
    printf("Enter Your Computer Marks \n");
    scanf("%f", &comp);

    total = eng + maths + phy + chem + comp;
    per = (total/500) * 100;

    printf("Name : %s \n", name);
    printf("Class: %d \n", class);
    printf("Roll NO: %d \n", roll);
    printf("Total Marks: %f \n", total);
    printf("Percentage is : %f \n", per);

    per>30 ? printf("You Are : PASS") : printf("You Are: FAIL");

    return 0;
}