#include <iostream>
using namespace std;
int main ()
{
int a[10];
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
int i;
int max = a[0];
int min = a[0];

  for (i = 0; i<10; i++)
    {
      if (a[i] > max)
        {
          max = a[i];
        }
      else if (a[i] < min)
        {
          min = a[i];
        }
    }
  cout << max << endl;
  cout << min << endl;

  return 0;
}
