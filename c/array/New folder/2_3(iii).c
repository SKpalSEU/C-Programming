#include<stdio.h>
int main()
{
	int a,b,count,sum=0;
	for(count=1,a=5;count<=75;count++,a=a+6){
	
	
		if(count%2 != 0){
			sum=sum+a;
		}
		else
			sum=sum-a;
			
		}
		printf("%d\n",sum);
		
		return 0;
			
}
