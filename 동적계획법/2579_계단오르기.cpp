#include <iostream>
#include <algorithm>

using namespace std;

int n;

int arr[300];
int dp[300];

int main()
{   
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];    
    }
    
    dp[0] = arr[0];
    dp[1] = arr[0] + arr[1];
    dp[2] = arr[2] + max(arr[0], arr[1]);
    
    for(int i = 3; i < n; i++)
        dp[i] = max(dp[i-2], arr[i-1] + dp[i-3]) + arr[i];

    cout << dp[n-1];
    
    return 0;
}