#include<iostream>
#include<vector>
#include<queue>
#include<stdio.h>
#define MAX 100000
using namespace std;
int dis[MAX];
void bfs(int startingnode,int ending, vector<int> edges[MAX])
{

    vector<bool>visited(MAX);

    dis[startingnode]=0;
    queue<int> q;
    q.push(startingnode);
    visited[startingnode]=true;
    while(!q.empty())
    {
        int x=q.front();
        q.pop();
       // cout << x <<endl;
        for(int i=0;i<edges[x].size();++i){
            int to=edges[x][i];

            if(!visited[to])
        {
            dis[to]=dis[x]+1;
            visited[to]=true;
            q.push(to);
        }
        }

}
}
int main()
{
    int cas=1,n,numberI,numberJ,j=1;
    vector<int>edges[MAX];
    while(scanf("%d",&numberI)!=EOF )
    {


        for(int i=1;i<=numberI;++i)
        {
            cin >>numberJ ;
            edges[j].push_back(numberJ);
            edges[numberJ].push_back(j);
        }



        if(j==19){
                cin >> n;
                int source,desti;
              printf("Test Set #%d\n",cas);
            for(j=0;j<n;j++)
            {
                cin >> source >>desti;
                bfs(source,desti,edges);
                printf("%2d to %2d: %d\n",source,desti,dis[desti]);


            }
            printf("\n");
            j=0;
            for(int i=0;i<MAX;i++)
        edges[i].clear();
        cas++;
        }


j++;
    }
    return 0;
}
