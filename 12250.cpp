#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<string>> s_table={{"HELLO","ENGLISH"},
        {"HOLA","SPANISH"},
        {"HALLO","GERMAN"},
        {"BONJOUR","FRENCH"},
        {"CIAO","ITALIAN"},
        {"ZDRAVSTVUJTE","RUSSIAN"}};

    int t=1;
    string input;

    cin >> input;

    while(input!="#")
    {
        bool found=false;
        for(int i=0;i<s_table.size();i++)
        {
            //cout << s_table[i][1] <<endl;
            if(input==s_table[i][0])
            {
                cout << "Case " << t <<": " << s_table[i][1] <<endl;
                //printf("Case %d: %s\n",t,s_table[i][1]);
                found=true;
                break;
            }
        }
        if(!found)
            cout << "Case " << t <<": " << "UNKNOWN" <<endl;
        t++;
        cin >> input;
    }

    return 0;



}
