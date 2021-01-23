#include<bits/stdc++.h>
using namespace std;
long long rev(long long n)
{
    long reverseNum=0;
    while(n!=0)
    {
        int temp=n%10;
        reverseNum=10*reverseNum;
        reverseNum+=temp;
        n/=10;
    }
    return reverseNum;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int itr=0;
        bool palin=false;
        long long n;
        cin >> n;
        long long sum=n;
        while(!palin)
        {
            long long reverseNum=rev(sum);
            sum+=reverseNum;

            string s=to_string(sum);
            int i=0;
            int j=s.length()-1;

            while(i<=j)
            {
                if(s[i]!=s[j])
                {
                    palin=false;
                    break;
                }
                else
                {
                    palin=true;
                }
                i++;
                j--;

            }
            itr++;
            cout <<"itr: " <<itr << " " << sum <<endl;
        }

        cout << itr << " " << sum <<endl;

    }
    return 0;
}
