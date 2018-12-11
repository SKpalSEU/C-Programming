#include<stdio.h>
int main()
{
	int x,dif,sum,count;
	
	x=7;
	sum=0;
	count=1;
	while(count<=100){
		sum=sum+x;
		x=x+13;
		count++;
	}
	printf("%d",sum);
}
