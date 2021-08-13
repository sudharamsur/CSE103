#include<stdio.h>
int main()
{
    double a,b,c,X1,X2,Y,Z;
    scanf ("%lf %lf %lf",&a,&b,&c);
    Z = (2*a);
    X1 = (-b+ sqrt(b*b-4*a*c))/Z;
    X2 = (-b- sqrt(b*b-4*a*c))/Z;

    Y = (b*b - 4*a*c);

    if (Y<=0 || Z==0)
    {
        printf ("Impossivel calcular\n");
    }
    else
    {
        printf ("R1 = %.5lf\n",X1);
        printf ("R2 = %.5lf\n",X2);
    }

    return 0;
}
