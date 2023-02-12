#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={8,12,16,4,0,20};
    int k=4,c=0;
    int n = sizeof(a)/ sizeof(a[0]);

    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           if(a[j]-a[i]==k)
           {
               c++;
           }
        }

    }
    cout<<c;


}
