/*********************************************
> File  : scc.cpp
> Author: NewYork
> Mail  : 2287794993@qq.com 
> Time  : Mon 22 Jun 2015 08:44:32 AM CST
********************************************/

#include<iostream>
#include<vector>

std::vector<int> G[MAX_V];
std::vector<int> rG[MAX_V];
std::vector<int> vs;
bool used[MAX_V];
int cmp[MAX_V];

void add_edge(int from, int to)
{
    G[from].push_back(to);
    rG[to].push_back(from);
}

void dfs(int v)
{
    used[v] = true;
    for(size_t index=0; index<G[v].size(); index++)
    {
        if(!used[G[v][i]])
        {
            dfs(G[v][i]);
        }
    }
    vs.push_back(v);
}

void rdfs(int v, int k)
{
    used[v] = true;
    cmp[v] = k;
    for(size_t index=0; index<rG[v].size(); index++)
    {
        if(!used[rG[v][index]])
        {
            rdfs(rG[v][index]);
        }
    }
}

int scc()
{
    memset(used, 0, sizeof(used));
    vs.clear();
    for(size_t v=0; v<V; v++)
    {
        if(!used[v])
        {
            dfs[v];
        }
    }
    memset(used, 0, sizeof(used));
    int k = 0;
    for(size_t index=vs.size()-1; index>=0; i--)
    {
        if(!used[vs[i]])
        {
            rdfs(vs[i], k++);
        }
    }
    return k;
}

int main(void)
{
    int V;

}
