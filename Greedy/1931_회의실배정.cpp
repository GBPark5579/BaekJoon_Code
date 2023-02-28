#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, endtime, ans;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    cin >> n;
    
    vector<pair<int,int>> v(n);
    
    for(int i = 0; i < n; i++)
        cin >> v[i].second >> v[i].first;
    
    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++)
    {
        if(endtime <= v[i].second)
        {
            endtime = v[i].first;
            ans++;
        }
    }
    
    cout << ans;
}
