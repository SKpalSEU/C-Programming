#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ara[5],e,i,n;
	for (i=0;i<5;i++)
    {
        cin >> ara[i];
    }
	 cout<<"enter the element you want to insert: ";
	 cin>>e;
	 cout<<"enter the position number for your element: ";
    cin>>i;

	 ara[i-1]=e;

	 cout<<"the new ara is: ";
	 for(n=0;n<5;n++)
        {
	 cout<<ara[n]<<" ";
	 }
	 return  0;


}
