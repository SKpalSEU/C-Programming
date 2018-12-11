#include<stdio.h>
int main()
{
	int num,sum,rem,arm;
	printf("the all armostrong number between 1 to 10,000 are: \n");
	//num=1;
	num=1;
	while(num<=10000){
	arm=num;
	sum=0;
	while(arm!=0){
		rem=arm%10;
		sum=sum+(rem*rem*rem);
		arm=arm/10;
	}
	if(num==sum){
		printf("%d\n",num);
	}
		num++;
		
}
	return 0;
}
