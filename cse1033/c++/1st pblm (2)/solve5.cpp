#include<bits/stdc++.h>
using namespace std;
int main()

{
    int arr[50],n,i,j,cnt;
    cin >> n;
    for(i=0;i<n;i++)
        cin >> arr[i];
        for(i=0;i<n;i++)
    {
        cnt=0;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]==arr[i])
            cnt++;
        }
        if (cnt==0)
        cout << arr[i] << " ";
        }

    return 0;
}
