#include <iostream>

using namespace std;

int t, m, n, k;

int dy[4] = {1, -1, 0, 0};
int dx[4] = {0, 0, 1, -1};
int arr[50][50];
int visited[50][50];

void dfs(int y, int x)
{
    visited[y][x] = 1;

    for(int i = 0; i < 4; i++)
    {
        int ny = y + dy[i];
        int nx = x + dx[i];
        
        if(ny < 0 || ny >= n || nx < 0 || nx >= m)
            continue;
        
        if(arr[ny][nx] && !visited[ny][nx])
            dfs(ny, nx);
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    cin >> t;
    
    for(int i = 0; i < t; i++)
    {
        cin >> m >> n >> k;

        for(int j = 0; j < n; j++)
            for(int a = 0; a < m; a++)
            {
                arr[j][a] = 0;
                visited[j][a] = 0;
            }
        
        int cnt = 0;
        
        for(int j = 0; j < k; j++)
        {
            int x, y;
            cin >> x >> y;
            
            arr[y][x] = 1;
        }
        
        for(int j = 0; j < n; j++)
            for(int a = 0; a < m; a++)
                if(arr[j][a] && !visited[j][a])
                {
                    cnt++;
                    dfs(j,a);
                }
                
        cout << cnt << endl;
    }

    return 0;
}