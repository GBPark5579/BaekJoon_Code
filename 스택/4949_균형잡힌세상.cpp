#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    while(1)
    {
        string str;
        bool flag = 0;
        getline(cin, str);
        
        stack<char> s;
        
        if(str == ".")
            break;
    
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == '(' || str[i] == ')' || str[i] == '[' || str[i] == ']')
            {
                if(s.empty() || str[i] == '(' || str[i] == '[')
                    s.push(str[i]);
                else if((s.top() == '(' && str[i] == ')') || (s.top() == '[' && str[i] == ']'))
                    s.pop();
                else
                    flag = 1;
            }
        }
        
        if(flag == 0 && s.empty())
            cout << "yes" << '\n';
        else
            cout << "no" << '\n';
    }

    return 0;
}