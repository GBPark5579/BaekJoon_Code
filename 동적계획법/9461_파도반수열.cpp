#include<iostream>
#include<vector>

using namespace std;

vector<long long> v = {1,1,1,2,2};

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, temp;
    cin >> n;
    
    for(int i = 5; i < 100; i++)
        v.push_back(v[i-1] + v[i-5]);
    
    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        cout << v[temp - 1] << '\n';
    }
}