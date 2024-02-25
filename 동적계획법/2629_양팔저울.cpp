#include<iostream>
#include<algorithm>

using namespace std;

int n, weight[31];
bool dp[31][15001];

void dfs(int i, int w)
{
	if (i > n || dp[i][w]) 
        return;
	dp[i][w] = true;
	dfs(i + 1, w + weight[i]);
	dfs(i + 1, abs(w - weight[i]));
	dfs(i + 1, w);
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> weight[i];
    
	dfs(0, 0);
    
    int b;
	cin >> b;

	for (int i = 0; i < b; i++)
	{
        int temp;
		cin >> temp;

		if(temp > 15000) 
            cout << "N ";
		else if (dp[n][temp]) 
            cout << "Y ";
		else 
            cout << "N ";
	}	
}