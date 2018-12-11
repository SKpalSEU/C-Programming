#include<stdio.h>
int main()
{
	int x,n,dif,ans;
	x=2;
	ans=1;
	while(x<=37){
		ans=ans*x;
		x=x+5;
	}
	printf("%d",ans);
}

