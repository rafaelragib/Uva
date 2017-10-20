#include<iostream>
#include<vector>
#include <algorithm>
#define MAX 10000
using namespace std;
vector<int>edges[MAX];
int n,e;
bool color[MAX];
int tim=0;

void dfs_use(int src)
{
 tim++;
    color[src]=true;

    for(int i=0;i<edges[src].size();i++)
    {
       int to=edges[src][i];
        if(color[to]==false)
        dfs_use(to);

    }
}
int main(){
    int t;
    cin >>t;
    while(t>0){
    int start,l;
    cin >>n >>e >>l;
    for(int i=1;i<=e;i++)
    {
        int x,y;
        cin >>x >>y;
        edges[x].push_back(y);

    }

    for(int i=1;i<=l;i++)
    {
        int start;
        cin >>start;
        if(!color[start])
        dfs_use(start);


    }
    cout << tim <<endl;
    tim=0;
    fill(color, color + MAX, false);
    for(int i=0;i<n;i++)
        {edges[i].clear();

        }
        t--;
    }
return 0;
}
