#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <set>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count =0;
    string dot = ".";

    for (int i = 0; i < n; i++)
    {
        if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='.')
        {
            cout<<'2'<<endl;
            return;
        }
        if(s[i] == '.'){
            count+=1;
        }
    }
    cout<<count<<endl;
    
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