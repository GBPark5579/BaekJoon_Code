#include <iostream>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

	int n;
	int result = 0;
    
	cin >> n;

	for (int i = 1; i < n; i++) 
    {
		int sum = 0;
		int num = i;
        
		while (num != 0) 
        {
			sum += num % 10;
			num /= 10;
		}
		if (sum + i == n) 
        {
			result = i;
			break;
		}
	}

	cout << result;

	return 0;
}