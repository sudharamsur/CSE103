#include<stdio.h>
int main ()
{
    char A[100];
    double B,C,X;
    scanf ("%s",&A);
    scanf ("%lf %lf",&B,&C);
    X = B + (C*0.15);
    printf ("TOTAL = R$ %.2lf\n",X);

    return 0;
}
