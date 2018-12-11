#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int n,i,space=0,word=1,fullstop=0,coma=0;
	
	printf("enter the sentence: ");
	gets(str);
	printf("%s\n",str);
	
	n=strlen(str);
	printf("string length: %d\n",n);
	
	for(i=0;i<n;i++){
		if(str[i]==' '){
			space++;
			word++;
	}
		if(str[i]=='.')
			fullstop++;
		if(str[i]==',')
			coma++;
	
	}

		if(n==0)
			word--;
		printf("In this sentence there are\n %d letters\n%d words.\n%d spaces\n%d fullstops and\n%d comas\n",n-(space+fullstop+coma),word,space,fullstop,coma);
		
		return 0;
}
