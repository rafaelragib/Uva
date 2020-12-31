#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >>n;
        long long result=(-1+sqrt(1+8*n))/2;
        cout << result <<endl;
    }
    return 0;

}
