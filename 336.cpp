#include<iostream>
#include<vector>
#include<queue>
#include<stdio.h>
#define MAX 100000
using namespace std;

long n,e;
vector<long long>dis[MAX];
long bfs(long startingnode,long ttl,vector<long long> edges[MAX])
{

    long node=0;
    vector<bool>visited(MAX);

    dis[startingnode].push_back(0);
    queue<long> q;
    q.push(startingnode);
    visited[startingnode]=true;
    while(!q.empty())
    {
        long x=q.front();
        q.pop();
        for(long i=0;i<edges[x].size();++i){
            long long to=edges[x][i];

            if(!visited[to])
        {
            dis[to].push_back(dis[x]+1);
            visited[to]=true;
            q.push(to);
        }
        }

}
return node;
}
int main()
{
    long cas=0;
    while(scanf("%ld", &e) &&e){

    vector<long long>edges[MAX];

    for(long i=0;i<e;i++)
    {
        long x,y;
        cin >>x >>y;
        edges[x].push_back(y);
       edges[y].push_back(x);
    }
    long source,ttl;
    while(scanf("%ld %ld",&source,&ttl) &&(source!=0 || ttl!=0 )){
    if(source==0 && ttl==0){
        break;
    }
    cas++;
    long node=bfs(source,ttl,edges);
    printf("Case %ld: %ld nodes not reachable from node %d with TTL = %d.\n",cas,node,source,ttl);

}
    }
return 0;
}
