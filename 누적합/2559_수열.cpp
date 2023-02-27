#include <iostream>
#include <algorithm>

using namespace std;

int n,k,tmp;
int ret = -1e6;

int sum[100000];

int main() 
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	cin >> n >> k;
    
	for (int i = 1; i <= n; i++) 
    {
		cin >> tmp;
		sum[i] = sum[i - 1] + tmp;
	}
	for (int i = k; i <= n; i++) 
		ret = max(ret, sum[i] - sum[i - k]);

    cout << ret;
}