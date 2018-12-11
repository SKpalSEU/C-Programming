#include<stdio.h>
int main()
{
	int x,n,ans,r,r_ans,nr_ans;
	printf("enter the value of n: ");
	scanf("%d",&n);
	printf("enter the value of r: ");
	scanf("%d",&r);
	x=1;
	ans=1;
	
	while(x<=n){
		ans=ans*x;
		x++;
	}
	
	x=1;
	r_ans=1;
	
	while(x<=r){
		r_ans=r_ans*x;
		x++;
	}
	
		x=1;
	nr_ans=1;
	
	while(x<=(n-r)){
		nr_ans=nr_ans*x;
		x++;
	}
	
	printf("%d",ans/(r_ans*nr_ans));
	return 0;
}
