#include <iostream>
#include <utility>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, rank;

    pair<int,int> arr[50];
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
        cin >> arr[i].first >> arr[i].second;

    for(int i = 0; i < n; i++)
    {
        rank = 1;
        for(int j = 0; j < n; j++)
            if(arr[i].first < arr[j].first && arr[i].second < arr[j].second)
                rank++;
        
        cout << rank << ' ';
    }

    return 0;
}