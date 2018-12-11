
#include<bits/stdc++.h>
using namespace std;

int arr[]={2, 8, 6, 8, 10};
int brr[]={-14, 8, 12, 15};
int ans[10];

int main(){

int i=0, j=0, k=0;

for(int i=0; i<9; i++){
   if(i<5)ans[i]=arr[i];
   else ans[i]=brr[i%5];
}

sort(ans,ans+9);

for(int i=0; i<9; i++){
    if(i!=0&&ans[i]==ans[i-1])continue;

    cout << ans[i] << " ";
}

return 0;

}
