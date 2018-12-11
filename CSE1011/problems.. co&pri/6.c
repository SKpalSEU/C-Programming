#include<stdio.h>
int main()
{
    float km,mi,cm;
    printf ("Enter Distance");
    scanf ("%f",&km);
    mi=km*1000;
    cm=mi*100;
    printf ("miter=%.2f,\ncentemiter=%.2f",mi,cm);
    return 0;

}
