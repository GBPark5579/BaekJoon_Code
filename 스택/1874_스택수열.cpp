#include <iostream>
#include <stack>
#include <string>

using namespace std;

stack<int> s;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int n;
    string str = "";
    int j = 1;
    bool flag = 0;

    cin >> n;
    
    for(int i = 1; i <= n; i++)
    {
        int temp;
        cin >> temp;
        
        while(j <= temp)
        {
            s.push(j);
            j++;
            str += "+";
        }
        
        if(s.top() == temp)
        {
            s.pop();
            str += "-";
        }
        else
        {
            flag = 1;
            break;
        }
    }
    
    if(!flag)
        for(int i = 0; i < str.length(); i++)
            cout << str[i] << '\n';
    else
        cout << "NO";
    
    return 0;
}