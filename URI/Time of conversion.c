#include <stdio.h>

int main()
{
    int N,c,sec,min,hour;
    scanf ("%d",&N);
    sec = N%60;
    c = N/60;
    min = c%60;
    hour = c/60;


    printf ("%d:%d:%d\n",hour,min,sec);

    return 0;
}
