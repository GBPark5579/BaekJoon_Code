#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n,k,x;
    
    cin >> n >> k;
    
    vector<int> v(n);

    for(int i = 0; i < n; i++)
    {
        cin >> x;
        v.at(i) = x;
    }
    
    sort(v.begin(), v.end());
    
    cout << v.at(n-k);
    
    return 0;
}