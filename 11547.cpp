#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while(testcase--)
    {
        int n;
        cin >> n;
        n=(((((n*567)/9)+7492)*235)/47)-498;
        if(n<0)
            n=n*(-1);

        int ans;
        n=n/10;
        ans=n%10;


        cout << ans <<endl;

    }
    return 0;
}
