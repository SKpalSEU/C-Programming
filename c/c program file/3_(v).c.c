#include<stdio.h>
#include<math.h>
int main()
{
	float x,n,n2,f_ans,sum;
	scanf("%f",&n);
	
	x=1;
	f_ans=1;
	sum=0;
	
	while(x<=n){
		f_ans=f_ans*x;
		sum=sum+((x*x)/f_ans);
		x++;
	}
	printf("%f",sum);
	return 0;
}
