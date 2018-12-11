#include<stdio.h>
int main()
{
	int n,incrise,count,sum;
	scanf("%d",&count);
	n=0;
	incrise=1;
	sum=0;
	while(incrise<=count){
		n=n+incrise;
		sum=sum+n;
		incrise++;
	}
	printf("%d",sum);
	return 0;
}
