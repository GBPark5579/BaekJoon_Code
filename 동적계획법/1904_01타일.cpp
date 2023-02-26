#include<iostream>
#include<vector>

using namespace std;

int n;

vector<long long> v = {0,1,2};

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    cin >> n;

    for(int i = 3; i < n+1; i++)
    {
        long long temp = 0;
        temp = v[i-1] + v[i-2];
        v.push_back(temp % 15746);
    }

    cout << v[n];
}