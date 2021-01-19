#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin >> n;
        vector<int> ar(n);
        int m=INT_MIN;
        for(int i=0;i<n;i++)
         {
             cin >> ar[i];
             if(ar[i]>m)
                m=ar[i];
         }
        printf("Case %d: %d\n",i,m);

    }
    return 0;
}
