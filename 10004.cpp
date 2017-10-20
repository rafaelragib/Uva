#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int n,e;

int main()
{
    while(true)
    {
        cin>> n;
        if(n==0)
        break;
vector<int> edges[100000];
    cin >> e;

    for(int i=0;i<e;i++)
    {
        int x,y;
        cin >>x >>y;
        edges[x].push_back(y);
        edges[y].push_back(x);

    }
bool bi=true;
int color[10000];
    for(int i=0;i<n;i++)
    {
        color[i]=-1;
    }
    color[0]=1;
    queue<int> q;
    q.push(0);
    while(!q.empty())
    {
        int x=q.front();
        q.pop();

        for(int i=0;i<(int)edges[x].size();++i){
            int to=edges[x][i];
            if(color[to]==-1)
        {
            color[to]=1-color[x];
            q.push(to);


        }
        else if(color[x]==color[to]){
            bi= false;
            break;
        }
        }

    }

if(bi)
    cout <<"BICOLORABLE."<<endl;
    else
    cout <<"NOT BICOLORABLE." <<endl;
}
return 0;
}
