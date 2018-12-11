/*#include<stdio.h>
int main()
{
	int ara[5]={1,2,3,4,5},ara2[6]={2,3,4,6,7,5},i,j;

	for(i=0;i<=5;i++){
		for(j=0;j<=6;j++){
			if(ara[i]==ara2[j])
				printf("%d,",ara[i]);
		}

	}
}*/



#include<stdio.h>
int main()
{
    int a[5],i;
    int b[5],j;
    printf("first array: ");
    for(i=0;i<5;i++)
    {
       scanf("%d",&a[i]);
    }
    printf("second array: ");
    for(j=0;j<5;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i]==b[j])
                printf("The matched %d\n",b[j]);
        }
    }

}

