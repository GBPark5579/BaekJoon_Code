#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct person
{
    int age, idx;
    string name;
};

bool compare(const person& first, const person& second)
{
    if(first.age != second.age) 
        return first.age < second.age;
    
    return first.idx < second.idx;
}

int main()
{	
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;
    cin >> n;
    person people[100001];

    for (int i = 0; i < n; i++)
    {    
        cin >> people[i].age >> people[i].name;
        people[i].idx = i;
    }

    sort(people, people + n, compare);

    for (int i = 0; i < n; i++)
        cout << people[i].age << " " << people[i].name << "\n";
    
    return 0;
}