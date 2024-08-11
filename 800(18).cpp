#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <set>
using namespace std;

void solve()
{
    long long x, k;
    cin >> x >> k;
    if (x % k != 0)
    {
        cout << 1 << endl;;
        cout << x;
    }
    else
    {
        cout << 2 << endl;;
        cout << k - 1 << " " << 1;
    }
    cout << endl;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}