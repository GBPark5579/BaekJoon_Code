#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int sum[501], file[501], dp[501][501];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t, k;
	cin >> t;

	while (t--)
	{
		cin >> k;
		for (int i = 1; i <= k; i++)
		{
			cin >> file[i];
			sum[i] = sum[i - 1] + file[i];
		}

		for (int i = 1; i <= k; i++)
		{
			for (int j = 1; j <= k - i; j++)
			{
				dp[j][i + j] = 100000000;
				for (int a = j; a < i + j; a++)
					dp[j][i + j] = min(dp[j][i + j], dp[j][a] + dp[a + 1][i + j] + sum[i + j] - sum[j - 1]);
			}
		}

		cout << dp[1][k] << '\n';
	}
    
    return 0;
}