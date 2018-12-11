#include<iostream>
#include<algorithm>
using namespace std;

void kthSmallest(int arr[], int n, int k)
{

	sort(arr, arr+n);

	cout << "K'th smallest element is "<<arr[k-1]<<endl;
	cout << "K'th largest element is "<<arr[n-k]<<endl;
	cout<<n;
}

int main()
{
	int arr[10];
	for(int i=0;i<10;i++){
        cin>>arr[i];
	}
	int n = 10,k;
	cout<<"k = ";
	cin>>k;
	kthSmallest(arr, n, k);
	return 0;
}
