#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;

    while(true)
    {
        getline(cin,s);
        if(s=="0:00")
            break;

        string h="";
        string m;
        int i=0;
        while(s[i]!=':')
        {
            h+=s[i];
            i++;
        }
        i++;
        while(i<s.length())
        {
            m+=s[i];
            i++;
        }
        float h_i=stoi(h);
        float m_i=stoi(m);
        if(h_i==12)
            h_i=0;
        if(m_i==60)
            m_i=0;
        h_i=0.5*(h_i*60+m_i);
        m_i=6*m_i;


        float dif=abs(h_i-m_i);

        //cout << h_i << " " << m_i <<endl;

        if(dif>abs(dif-360))
        {
            printf("%.3f\n",abs(dif-360));
        }
        else
            printf("%.3f\n",dif);

    }
    return 0;
}
