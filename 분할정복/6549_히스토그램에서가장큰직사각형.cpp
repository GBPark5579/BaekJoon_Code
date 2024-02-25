#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    long long n;
    long long hist[100001];

    while(1)
    {
        cin >> n;

        if(n <= 0)
            break;

        for(int i = 0; i < n; i++)
            cin >> hist[i];

        hist[n] = -1;

        stack<int> s;
        long long ans = 0;

        for(int i = 0; i <= n; i++)
        {
            while(!s.empty() && hist[i] < hist[s.top()])
            {
                int height, weight;
                height = s.top();
                s.pop();

                if(s.empty())
                    weight = i;
                else
                    weight = i - s.top() -1;

                ans = max(ans, hist[height] * weight);
            }
            s.push(i);
        }
        cout << ans << '\n';
    }
    return 0;
}