#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int t=1;
    while(cin>> n){
        if(n==0)
            return 0;
        int total=0;
        for(int i=1;i<=n;i++)
        {
            int curr;
            cin >> curr;
            if(curr>0)
                total++;
            else
            {
                total--;
            }
        }
        printf("Case %d: %d\n",t,total);
        t++;

    }
    return 0;
}
