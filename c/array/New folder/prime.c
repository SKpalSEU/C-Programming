#include<stdio.h>
int main()
{
	int a,b,prim,min,max;
	
	printf("enter the minimam of range: ");
	scanf("%d",&min);
	
	printf("enter the maximum of range: ");
	scanf("%d",&max);
	
	for(a=min;a<=max;a++){
		for(b=2,prim=1;b<a;b++){
			
			if(a%b==0){
			prim=0;
			break;
		}
	}
		if(prim==1)
			printf("%d\n",a);
		}
	
}
