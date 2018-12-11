#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    for(int i=min(a,b);i>=1;i--)
    {
        if(a%i==0&&b%i==0)
            return i;

    }

}
int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int n,arr[100],g,l;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    g = l = arr[0];
    for(int i=1; i<n; i++)
    {
        g=gcd(g,arr[i]);
        l=lcm(l,arr[i]);
    }
    cout << "GCD = "<< g << " &LCM = " << l;
    return 0;
}

