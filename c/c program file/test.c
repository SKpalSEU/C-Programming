#include<stdio.h>
int main()
{
    int x,n,y,z;
    printf("The number of rows\n");
    scanf("%d",n);
    for (x=1;x<=n;x++){

         for (y=n;y<=(x*1);y--){
         printf(" ");
         }

         for (y=1;y<=(x*2)-1;y++){
         printf("*");
         }
         printf("\n");
    }
}
