#include <iostream>
#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;

int dist[100000];
int cost[100000];

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int n;
    
    long long total = 0;
    long long n_cost;
    
    cin >> n;
    
    for(int i = 1; i < n; i++)
        cin >> dist[i];

    for(int i = 0; i < n; i++)
        cin >> cost[i];

    n_cost = cost[0];

    total = n_cost * dist[1];
    
    for(int i = 1; i < n; i++)
    {
        if(n_cost < cost[i])
            total += n_cost * dist[i+1];

        else
        {
            n_cost = cost[i];
            total += n_cost*dist[i+1];
        }
    }
    cout << total;
}