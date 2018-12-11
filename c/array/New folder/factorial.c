#include<stdio.h>
int main()
{
	int x,n,ans;
	printf("enter a number: ");
	scanf("%d",&n);
	
	x=1;
	ans=1;
	
	while(x<=n){
		ans=ans*x;
		x++;
	}
	printf("%d",ans);
	return 0;
}
