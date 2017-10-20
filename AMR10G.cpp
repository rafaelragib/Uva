#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    for(int j=0;j<t;j++)
    {
    int n,k;
    long long diff=INT_MAX;
    long long temp=0;
    cin >> n >>k;
    long long height[n];
    for(int i=0;i<n;i++)
        cin >> height[i];
    int siz=sizeof(height)/sizeof(height[0]);

    sort(height,height+siz);
//    for(int i=0;i<n;i++)
//        cout << height[i] << endl;

  for(int i=0;i<=n-k;i++)
  {
      temp=height[i+k-1]-height[i];
      diff=min(temp,diff);
}
cout << diff<<endl;
    }

    }
