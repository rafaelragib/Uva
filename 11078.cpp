#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream in;
    in.open("data.txt");
    int t;
    in >>t ;
    while(t--)
    {
        int n;
        in >> n;
        vector<int> s(n);
        for(int i=0; i<n; i++)
            in >>s[i];
        int m_s=INT_MIN,dif=INT_MIN;
        for(int i=0; i<n-1; i++)
        {
            if(m_s<s[i])
            {
                m_s=s[i];
            }
            if(dif<m_s-s[i+1])
                    dif=m_s-s[i+1];
            }
            cout << dif <<endl;
    }
    return 0;
}
