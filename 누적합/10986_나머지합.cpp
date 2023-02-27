#include <iostream>

using namespace std;

long long sum, ans;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int n, m;

    cin >> n >> m;
    
    long long cnt[m] = {0, };
    
    for(int i = 0; i < n; i++)
    {
        int temp;
        
        cin >> temp;

        sum += temp;

        cnt[sum % m]++;
    }
    
    for(int i = 0; i < m; i++)
        ans += cnt[i] * (cnt[i]-1) / 2;
    
    cout << ans + cnt[0];

    return 0;
}