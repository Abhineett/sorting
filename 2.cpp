#include <bits/stdc++.h>
using namespace std;


void printClosest(int arr[], int n, int x)
{
    int res_l, res_r;


      int temp = INT_MAX;


      for(int i=0;i<n-1;i++)
    {
          for(int j=i+1;j<n;j++)
        {

              if(abs(arr[i]+arr[j]-x)<temp)
            {
                  res_l=i;
                  res_r=j;
                  temp=abs(arr[i]+arr[j]-x);
            }
        }
    }

    cout <<" The closest pair is " << arr[res_l] << " and " << arr[res_r];
}


int main()
{
    int arr[] =  {10, 22, 28, 29, 30, 40}, x = 54;
    int n = sizeof(arr)/sizeof(arr[0]);
    printClosest(arr, n, x);
    return 0;
}
