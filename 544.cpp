#include<iostream>
#include<queue>
#include<vector>
#include<map>
#include<string>
#define MAX 10000
using namespace std;
vector<int>edges[MAX];
vector<int>costs[MAX];
map<string,int> cities;
struct data{
int v,w;
bool operator <(data p)const
    {
        return w<p.w;
    }

};
int mst(int src,int n,int en)
{
    int sum=0,p;
    int visited[MAX]={0};
    priority_queue<data> q;
    for(int i=0;i<n-1;++i)
    {
        int u=src;
        visited[u]=1;
        if(u==en)
        {

    return sum;
        }
        for(int j=0;j<edges[u].size();j++)
        {
            int v1=edges[u][j];
            if(visited[v1]==0)
            {
                data d;
                d.v=v1;
                d.w=costs[u][j];

               q.push(d);
            }
            }

                while(visited[src])
                {
                    data t=q.top();
                    q.pop();
                    src=t.v;
                    p=t.w;
                    }
        if(sum>p || sum==0)
            sum=p;
        }
return sum;
    }


int main()
{   int scn=1;
    while(true){
    int n,e,cont=0;
    string city1,city2;
    cin >>n >>e;
    if(n==0 && e==0)
        break;
    for(int i=0;i<e;i++)
    {

        int a,b,w;
        cin >> city1 >>city2 >> w;
        if(cities.find(city1)!=cities.end())
            a=cities[city1];
            else{
                cities[city1]=cont;
                a=cont++;
            }
          if(cities.find(city2)!=cities.end())
            b=cities[city2];
            else{
                cities[city2]=cont;
                b=cont++;
            }

            edges[a].push_back(b);
            edges[b].push_back(a);
            costs[a].push_back(w);
            costs[b].push_back(w);
    }
     int src,desti;
    cin >> city1 >>city2;
    src=cities[city1];
    desti=cities[city2];
    printf("Scenario #%d\n%d tons\n",scn++,mst(src,n,desti));
    for(int i=0;i<MAX;i++){
        edges[i].clear();
        costs[i].clear();
    }
    cities.clear();
    printf("\n");
}
return 0;
}
