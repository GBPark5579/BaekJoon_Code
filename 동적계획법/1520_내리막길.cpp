#include <iostream>
#include <algorithm>

using namespace std;

int m, n;
int map[500][500]; 
int dx[4] = { 0,0,-1,1 }; 
int dy[4] = { 1,-1,0,0 }; 
int dp[500][500]; 

int dfs(int y, int x) 
{
	if (y == m - 1 && x == n - 1) 
		return 1; 
	
	if ( dp[y][x] != -1)
        return dp[y][x]; 

	dp[y][x] = 0;
	
	for (int i = 0; i < 4; i++) 
	{
		int ny = dy[i] + y; 
		int nx = dx[i] + x; 
		
		if (ny < 0 || ny >= m || nx < 0 || nx >= n)
		    continue; 
		    
		if (map[ny][nx] >= map[y][x])
            continue; 
            
		dp[y][x] += dfs(ny, nx); 
	}
	return dp[y][x];
}

int main() 
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
	
	cin >> m >> n; 
	
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++) 
		{
			cin >> map[i][j]; 
			dp[i][j] = -1; 
		}
	}
	
	cout << dfs(0,0); 
	
	return 0;
}