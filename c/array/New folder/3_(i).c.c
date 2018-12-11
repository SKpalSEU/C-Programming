#include<stdio.h>
int main()
{
	int x,dif,sum;
	
	x=3;
	sum=0;
	while(x<=1691){
		sum=sum+x;
		x=x+13;
	}
	printf("%d",sum);
}
