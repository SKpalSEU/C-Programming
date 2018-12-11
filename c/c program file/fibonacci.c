#include<stdio.h>
int main()
{
	int x,n,first=0,second=1,next;
	printf("enter the number of term: ");
	scanf("%d",&n);
	for(x=0;x<=n;x++){
		if(x<=0){
			next=x;
		}
		else
			{
				next=first+second;
				first=second;
				second=next;
			}
			printf("%d\n",next);
		}
		return 0;
	}
	

