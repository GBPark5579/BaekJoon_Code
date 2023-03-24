#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    
    vector<int> v(n);
    
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> sv(v);
    
    sort(sv.begin(), sv.end());
    
    sv.erase(unique(sv.begin(), sv.end()), sv.end());

    for (int i = 0; i < n; i++)
        cout << lower_bound(sv.begin(), sv.end(), v[i]) - sv.begin() << " ";

    return 0;
}