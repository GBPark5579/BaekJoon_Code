#include <iostream>

using namespace std;

long long fib[41];

int main() 
{
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
	int n; 
    cin >> n;
    
	fib[1] = fib[2] = 1;
    
	for (int i = 3; i < 41; i++) 
        fib[i] = fib[i - 1] + fib[i - 2];
    
	cout << fib[n] << ' ' << n - 2;
}