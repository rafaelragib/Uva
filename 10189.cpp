#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    //ifstream in;
   // in.open("data.txt");
    int dirx[]={1,1,0,-1,-1,-1,0,1};
    int diry[]={0,1,1,1,0,-1,-1,-1};
    int t=1;
    while(true)
    {
        cin >> n >>m;
        if(n==0 && m==0)
            break;
        if(t!=1)
            cout <<endl;

        vector<vector<char>> ar;

        for(int i=0;i<n;i++)
        {
            vector<char> temp;
            for(int j=0;j<m;j++)
            {
                char x;
                cin >> x;
                temp.push_back(x);
            }
            ar.push_back(temp);
        }

        int cnt=0;
        for(int i=0;i<ar.size();i++)
        {
            for(int j=0;j<ar[i].size();j++)
            {
                cnt=0;
                if(ar[i][j]=='*')
                    continue;
                for(int k=0;k<8;k++)
                {
                    if(i+dirx[k]<0 || i+dirx[k]>=n || j+diry[k]<0 || j+diry[k]>=m )
                        continue;
                    if(ar[i+dirx[k]][j+diry[k]]=='*')
                        cnt++;
                }
               ar[i][j]='0'+cnt;
            }
        }
        printf("Field #%d:\n",t++);
        for(int i=0;i<ar.size();i++)
        {
            for(int j=0;j<ar[i].size();j++)
                cout << ar[i][j];
            cout <<endl;
        }

    }

return 0;
}
