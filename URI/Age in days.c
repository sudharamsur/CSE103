#include <stdio.h>

int main()
{
    int N,c,dia,mes,ano;
    scanf ("%d",&N);
    ano = N/365;
    c = N%365; m
    mes = c/30;
    dia = c%30;

    printf ("%d ano(s)\n",ano);
    printf ("%d mes(es)\n",mes);
    printf ("%d dia(s)\n",dia);


    return 0;
}
