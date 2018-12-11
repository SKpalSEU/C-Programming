#include<bits/stdc++.h>
using namespace std;
void Bubble_sort(int arr[],int n)
{
    for(int i=1 ; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
bool binary_search(int arr[],int n,int key)
{
    int low = 0, high = n-1;
    while(low<=high)
    {
       int mid = (low+high)/2;
       if(arr[mid]==key) return true;
       else if(arr[mid]<key) low=mid+1;
       else high=mid-1;
    }
    return false;
}
int main()
{
    int arr[100],n,key;
    scanf("%d",&n);
    cin >> key;
    for(int i=0; i<n; i++) cin >> arr[i];
    //Bubble_sort(arr,n);
    sort(&arr[0],&arr[n]);
    bool ok = binary_search(arr,n,key);
    if(ok==true) puts("yes");
    else puts("no");
}
