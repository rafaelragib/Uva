#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n,m;
        cin >> n >>m;
        n=n-2;
        m=m-2;
        while(n%3!=0)
            n++;
        while(m%3!=0)
            m++;
        cout << (n*m)/9 <<endl;


    }
    return 0;

}
