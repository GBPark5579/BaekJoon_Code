#include <iostream>

using namespace std;

pair<int, int> len[12];

int main() 
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
	int k, d, l, a1, a2;

	cin >> k;

	for (int i = 0; i < 6; i++) 
    {
		cin >> d >> l;
		len[i] = len[i + 6] = {d, l};
	}

	for (int i = 3; i < 12; i++) 
    {
		if (len[i].first == len[i - 2].first && len[i - 1].first == len[i - 3].first) 
        {
			a1 = len[i + 1].second * len[i + 2].second;
			a2 = len[i - 1].second * len[i - 2].second;
			break;
		}
	}
    
	cout << k * (a1 - a2);

	return 0;
}