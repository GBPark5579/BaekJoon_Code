#include<iostream>

using namespace std;

int n, k, cnt;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
   
    cin >> n >> k;

    int m[n] = {0, };
    
    for(int i = 0; i < n; i++)
        cin >> m[i];
    
    for(int j = 0; j < n; j++)
    {
        cnt += k / m[n-j-1];
        k = k % m[n-j-1];
    }
    
    cout << cnt;
    
    return 0;
}