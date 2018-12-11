#include<stdio.h>
int main()
{
	int x,n,ans=1;
	printf("enter a number: ");
	scanf("%d",&n);




	for(x=1;x<=n;x++){
		ans=ans*x;

	}
	printf("%d",ans);
	return 0;
}
