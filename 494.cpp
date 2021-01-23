#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    //ifstream in;
    //in.open("data.txt");
    while(getline(cin,s))
    {
        int cnt=0;
        int word_len=0;
        for(int i=0;i<s.length();i++)
        {
            if((s[i]>='A' && s[i]<='Z')|| (s[i]>='a' && s[i]<='z'))
            {
               // cout << "w: " << s[i];
                word_len++;
            }
            else
                {
                   // cout << endl;
                    if(word_len>0)
                    {
                        cnt++;
                        word_len=0;
                    }
                }
        }
        if(word_len>0)
            cnt++;
        cout << cnt <<endl;
    }
    return 0;
}
