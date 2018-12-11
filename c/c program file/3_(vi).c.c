#include<stdio.h>
int main()
{
	int x,n,dif,ans;
	x=2;
	do{
        ans=1;
	    n=12;

		ans=ans*x;
		x=x+5;

	printf("%d",ans);
	}
	while(x<=12);
}

