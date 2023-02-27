#include <iostream>
#include <vector>
using namespace std;

int main() 
{
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	int n, m;
	cin >> n >> m;

	vector<long> dp(n + 1);
    
	dp.push_back(0);
    
	for (int i = 1; i <= n; i++) 
    {
		long num;
		cin >> num;
		dp[i] = dp[i - 1] + num;
	}
    
	for (int a = 0; a < m; a++) 
    {
		int i, j;
		cin >> i >> j;
		cout << dp[j] - dp[i - 1] <<'\n';
	}

	return 0;
}