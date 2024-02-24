#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int visited[100001];
int cnt = 1; 
queue<int> q;

void bfs(vector<vector<int>> graph, int r)
{
    visited[r] = cnt;
    
    q.push(r);
    
    int temp;
    
    while(q.size()!=0)
    {
        temp = q.front();
        q.pop();
        
        for(int i = 0; i < graph[temp].size(); i++)
        {
            if(visited[graph[temp][i]] == 0)
            {
                visited[graph[temp][i]] = ++cnt;
                q.push(graph[temp][i]);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int n, m, r;
    cin >> n >> m >> r;
    
    vector<vector<int>> graph(n+1);
    
    for(int i = 1; i <= m; i++)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        
        graph[temp1].push_back(temp2);
        graph[temp2].push_back(temp1);
    }
    
    for(int i = 1; i <= n; i++)
        sort(graph[i].begin(), graph[i].end(), greater<>());
    
    bfs(graph, r);
    
    for(int i = 1; i <= n; i++)
        cout << visited[i] << '\n';
        
    return 0;
}