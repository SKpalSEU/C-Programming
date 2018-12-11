#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ara[10]={1,2,3,5,7,8,9,0,3,5},e,i,n;
	 cout<<"enter the element you want to insert: ";
	 cin>>e;
	 cout<<"enter the position number for your element: ";
	cin>>i;

	 ara[i-1]=e;

	 cout<<"the new ara is: ";
	 for(n=0;n<10;n++)
        {
	 cout<<ara[n]<<" ";
	 }
	 return  0;


}
