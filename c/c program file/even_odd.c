#include<stdio.h>
void main()
{
    int x=1,y;
    scanf("%d",&y);
    for(x=1;x<y;x++)
    {
        if(x%2==0)
    printf("The even number is:%d\n",x);
    }
    for(x=1;x<y;x++)

        if(x%2!=0)
    {
    printf("The odd number is:%d\n",x);
    }
}
