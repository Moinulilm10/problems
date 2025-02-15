#include<bits/stdc++.h>
using namespace std;

#define Max 1000000


vector<int>g[Max + 1];
bool vi[Max + 1];

int cnt, flag;

void dfs(int node)
{
    vi[node] = 1;
    for(int i=0; i<g[node].size(); i++)
    {
        int next = g[node][i];
        if(vi[next] == 1)
        {
            flag = 1;
            break;
        }
        else{
            cnt++;
            dfs(next);
        }
    }
}

int main()
{
    int node, edge;
    scanf("%d %d",&node,&edge);

    int k = 0, stnode;
    for(int i=0; i<edge; i++)
    {
        int u,v;
        scanf("%d %d",&u,&v);
        if(k==0)
            stnode = u;
        k = 1;
        g[u].push_back(v);
    }
    cnt = 1;
    flag = 0;
    vi[stnode]=1;
    dfs(stnode);

    if(flag == 0 && cnt == node && edge == node - 1)
    {
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
