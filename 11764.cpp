#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int j=1;j<=t;j++)
    {
        int n;
        cin >> n;
        vector<int> walls(n);
        for(int i=0;i<n;i++)
            cin >> walls[i];
        int high,low;
        high=low=0;
        for(int i=0;i<n-1;i++)
        {
            int cur=walls[i];
            if(walls[i+1]>cur)
                high++;
            else if(walls[i+1]<cur)
                low++;
        }
        printf("Case %d: %d %d\n",j,high,low);
        //cout << high << low <<endl;
    }
    return 0;
}
