#include<stdio.h>
int main()
{
   int a,b,num,i,flag=1;
   scanf ("%d%d",&a,&b);
   for (a=a;a<=b;a=a+1)
   {
     num=a;
     flag=1;


   for(i=2;i<num;i=i+1)
   {
       if (num%i==0)
       {
           flag=0;
       }
   }
   if (flag==1) printf ("%d\n",num);
   }
       return 0;
   }
