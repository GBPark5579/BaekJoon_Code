#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        stack<char> st;
        string str;
        
        cin >> str;
        
        for(int j = 0; j < str.length(); j++)
        {
            if(st.empty() || str[j] == '(')
                st.push(str[j]);
            else if(st.top() == '(')
                st.pop();
        }
        
        if(st.empty())
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}