#include<bits/stdc++.h>

using namespace std;
 
int main() {
   int arr[20], i, j, k, size;
 
   cout<<"\nEnter array size : ";
   cin>>size;
 
  cout<<"\nInput the elements : ";
   for (i = 0; i < size; i++)
      cin>>arr[i];
 
  cout<<"\nArray with Unique list  : ";
   for (i = 0; i < size; i++) {
      for (j = i + 1; j < size;) {
         if (arr[j] == arr[i]) {
            for (k = j; k < size; k++) {
               arr[k] = arr[k + 1];
            }
            size--;
         } else
            j++;
      }
   }
 
   for (i = 0; i < size; i++) {
     cout<<arr[i]<<" ";
   }
 
   return (0);
}
