#include <iostream>
using namespace std;

int arr[101];

int main()
{	
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    int n, m, result;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) 
    {
		for (int j = i + 1; j < n; j++) 
        {
			for (int k = j + 1; k < n; k++) 
            {
				if (arr[i] + arr[j] + arr[k] <= m && arr[i] + arr[j] + arr[k] > result)
					result = arr[i] + arr[j] + arr[k];
			}
		}
	}

	cout << result << '\n';

    return 0;
}