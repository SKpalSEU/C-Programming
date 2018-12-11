#include<stdio.h>
int main()
{
	int a,b,c,d,reng,reng2,run;
	printf("enter your patern range: ");
	scanf("%d",&reng);
	
	reng2=reng/2+1;
	
	
	
	for(d=1,a=reng;a>=1;a=a-2,d++){
		
		for(c=1;c<=d;c++)
			printf(" ");
		
	
		for(b=1;b<=a;b++)
			printf("*");
		
	
		printf("\n");
		
	}
	
	
	
	
	
	
	for(d=1,a=1;a<=reng;a=a+2,d++){
		
		for(c=reng2;c>=d;c--)
			printf(" ");
		
	
		for(b=1;b<=a;b++){
			printf("*");
		}
		
	
		printf("\n");
		
}

	return 0;
}
