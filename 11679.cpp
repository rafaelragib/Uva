#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b,n;
    while(cin >> b >> n)
    {
        if(b==0 && n==0)
        {
            //cout << b << n <<endl;
            return 0;
        }
        bool flag=false;
        vector<int> reserve(b);
        vector<vector<int>> defaulter(n,vector<int> (3));
        for(int i=0;i<b;i++)
            cin >> reserve[i];

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<3;j++)
                cin >> defaulter[i][j];
        }
        for(int i=0;i<defaulter.size();i++)
        {
            int d_bank=defaulter[i][0]-1;
            int c_bank=defaulter[i][1]-1;
            int l_v=defaulter[i][2];
            reserve[d_bank]-=l_v;
            reserve[c_bank]+=l_v;
        }

        for(int i=0;i<b;i++)
        {
            if(reserve[i]<0)
            {
                cout << "N" <<endl;
                flag=true;
                break;
            }


        }
        if(!flag)
            cout << "S" <<endl;
    }
    return 0;
}
