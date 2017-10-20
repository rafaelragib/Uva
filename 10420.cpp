#include<iostream>
#include<string>
#include<map>
#include <typeinfo>
using namespace std;

int main()

{

    int n;
    map<string,int>::iterator it;
    cin >> n;
    map<string,int> map;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        string s1;
        getline(cin,s1);
        map[s]+=1;

    }
for(auto elem : map)
{
   cout << elem.first << " " << elem.second <<endl;

}
}
