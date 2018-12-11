#include<stdio.h>
int main()
{
	int x,x2,dif,sum,sum2,count;
	
	x=5;
	sum=0;
	count=1;
	while(count<=38){
		sum=sum+x;
		x=x+12;
		count++;
	}
	x2=11;
	sum2=0;
	count=1;
	while(count<=37){
		sum2=sum2+x2;
		x2=x2+12;
		count++;
	}
	printf("%d",sum-sum2);
}
