#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        int n;
        cin >>n;
        getchar();
        //getline(cin,n);
        vector<int>instruction;
        instruction.push_back(0);
        int pos=0;
        for(int i=1; i<=n; i++)
        {
            string s;
            getline(cin,s);
            //cout<< "U"<<endl;
            //cout << s <<endl;
            if(s=="LEFT")
            {
                pos--;
                instruction.push_back(-1);
            }
            else if(s=="RIGHT")
            {
                pos++;
                instruction.push_back(1);
            }
            else
            {
                string ans="";
                for(int i=8; i<s.length(); i++)

                {
                    ans+=s[i];

                }
                int idx=stoi(ans);
                //cout << "idx: " << idx <<endl;
                //cout <<"VALUE: " << instruction[idx] <<endl;
                if(instruction[idx]==-1){
                    instruction.push_back(-1);
                    pos--;
                }
                else{
                    instruction.push_back(1);
                    pos++;
                }
            }
        }
        cout << pos <<endl;
    }
}
