#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int s,d;
        cin >> s >>d;


        if((s+d)%2!=0)
            cout << "impossible" <<endl;
        else
        {
            int x=(s+d)/2;

            int y=s-x;
            if (x<0 || y<0)
            {
                cout << "impossible" <<endl;
            }
            else
                cout << x << " " <<y <<endl;

        }
    }
    return 0;
}
