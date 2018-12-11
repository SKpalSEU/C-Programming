#include<stdio.h>
int main()
{
    float l,h,r,pi=3.1416;
    float areaR,periR,areaC,cirC;
    printf ("enter three number");
    scanf ("%f%f%f",&l,&h,&r);
    areaR=l*h;
    periR=2*l*h;
    areaC=pi*r*r;
    cirC=2*pi*r;
    printf ("area=%f,\nperimeter=%f,\narea=%f,\ncircumfrence=%f",areaR,periR,areaC,cirC);
    return 0;
}
