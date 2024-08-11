#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <set>
#include <map>
using namespace std;
void solve()
{
    long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char, int> mp;
    for (long long i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    long long count = 0;
    for (auto it : mp)
    {
        if (it.second % 2 != 0)
        {
            count++;
        }
    }
    count -= 1;
    if (k >= count)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}