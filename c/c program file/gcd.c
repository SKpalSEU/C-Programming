#include<stdio.h>
int main()
{
	int num1,num2,gcd=1,lcm;
	int x;
	printf("enter two number: ");
	scanf("%d%d",&num1,&num2);

	for(x=1;x<=num1 && x<=num2;x++){
		if(num1%x==0 && num2%x==0)
			gcd=x;
			lcm=(num1*num2)/gcd;
			}

		printf("gcd = %d\n",gcd);
		printf("lcm = %d\n",lcm);



}
