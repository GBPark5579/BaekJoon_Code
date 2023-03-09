#include<iostream>

using namespace std;

int n, t;
int enter, departure;
int x, y, r, x1, y1, x2, y2;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
	cin >> t;

	while (t--)
	{
		cin >> x1 >> y1 >> x2 >> y2;

		cin >> n;

		enter = 0;
		departure = 0;
        
		while (n--)
		{
			cin >> x >> y >> r;

			if ((x - x1) * (x - x1) + (y - y1) * (y - y1) < r * r) 
				if ((x - x2) * (x - x2) + (y - y2) * (y - y2) > r * r) 
					departure++;

			if ((x - x1) * (x - x1) + (y - y1) * (y - y1) > r * r)
				if ((x - x2) * (x - x2) + (y - y2) * (y - y2) < r * r)
					enter++;
		}

		cout << enter + departure << '\n';
	}
    return 0;
}