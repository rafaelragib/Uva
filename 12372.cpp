#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;

    for(int i=1;i<=t;i++)
    {
        int w,h,l;
        cin >> l >> w >>h;
        //int area=l*w*h;
        if(l>20)
            printf("Case %d: bad\n",i);
        else if(h>20)
            printf("Case %d: bad\n",i);
        else if(w>20)
            printf("Case %d: bad\n",i);
        else
            printf("Case %d: good\n",i);

    }
    return 0;
}
