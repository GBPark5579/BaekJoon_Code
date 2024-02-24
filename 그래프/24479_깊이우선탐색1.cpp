#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int cnt = 1;
vector<vector<int>> graph(100001);
int ans[100001];
bool visited[100001];

void dfs(int start, vector<int>& node)
{
    visited[start] = true;
    ans[start] = cnt;
    cnt++;
    
    for(int i = 0; i < node.size(); i++)
    {
        int next = node[i];
        if(visited[next] == false)
            dfs(next, graph[next]);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int n, m, r;
    
    cin >> n >> m >> r;

    for(int i = 0; i < m; i++)
    {
        int temp1,temp2;
        cin >> temp1 >> temp2;
        
        graph[temp1].push_back(temp2);
        graph[temp2].push_back(temp1);
    }
    
    for(int i = 0; i < n; i++)
        sort(graph[i].begin(),graph[i].end());
    
    dfs(r, graph[r]);
    
    for(int i = 1; i <= n; i++)
        cout << ans[i] << '\n';
    
    return 0;
}