#include<bits/stdc++.h>
using namespace std;

int arr[]={2, 6, 8, 10};
int brr[]={-14, 5, 13, 15};


int main()
{
    int i=0, j=0;

    while(true){
        if(i==4&&j==4)break;
        if(arr[i]<=brr[j] && i<4)
            {
            cout << arr[i] << " ";
            i++;
        }
        else{
            cout << brr[j] << " ";
            j++;
        }

    }

return 0;

}
