#include "header.h"

int fecha_valida(tFecha f)
{
    return (f.anio>=1600&&f.mes>=1&&f.mes<=12&&f.dia>=1&&f.dia<=cant_dias_mes(f.mes,f.anio));
}

int cant_dias_mes(int m,int a)
{
    int dias[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    return (m==2)?28+bisiesto(a):dias[m-1];
}

int bisiesto(int a)
{
    return (a%4==0&&a%100!=0)||a%400==0;
}
