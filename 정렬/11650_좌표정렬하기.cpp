#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, int>> v;

int main() 
{
    ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
	
    int n;
	cin >> n;

	int x, y;
    
    for (int i = 0; i < n; i++) 
    {
		cin >> x >> y;
		v.push_back({ x, y });
	}

	sort(v.begin(), v.end());
    
	for (int i = 0; i < n; i++) 
		cout << v[i].first << ' ' << v[i].second << '\n';
    return 0;
}