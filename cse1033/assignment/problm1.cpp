#include<bits/stdc++.h>
using namespace std;
bool search (int b[],int n,int k)
{
    for (int i=0;i<n;i++) if (b[i]==k) return true;
    return false;
}
int main()
{
    int n ,arr[100],key;
    cin>> n;
    for (int i=0;i<n;i++) cin >>arr[i];
    cin>> key;
    bool b = search(arr,n,key);
    if (b==true) cout <<"the Element " <<"key" <<"is present"<< endl;
    else cout << "the Element" <<"key" <<"is absent" << endl;
    return 0;
}
