#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    //ifstream in;
    //in.open("data.txt");
    cin >>t;
    int c=1;
    while(t--)
    {
        int n;
        cin >>n;
        vector<int> call(n);
        int total=0;
        int miles=0;
        int juice=0;
        for(int i=0; i<n; i++)
        {
            cin >> call[i];
            miles+=(call[i]+30)/30;
            juice+=(call[i]+60)/60;
        }
        miles*=10;
        juice*=15;

        if(miles>juice)
            printf("Case %d: Juice %d\n",c,juice);
        else if(miles<juice)
            printf("Case %d: Mile %d\n",c,miles);
        else
            printf("Case %d: Mile Juice %d\n",c,miles);
        c++;


    }
}
