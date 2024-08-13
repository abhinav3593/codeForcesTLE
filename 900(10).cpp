#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <set>
using namespace std;
void solve(){
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int l, r, k;
    for (int j = 0; j < q; j++)
    {
        long long sum = 0;
        long long subsum = 0;
        cin >> l >> r >> k;
        int multiplier = r - l + 1;
        for (int z = 0; z < n; z++)
        {
            sum += v[z];
        }
        for (int b = l-1; b < r; b++)
        {
            subsum += v[b];
        }
        long long qureysum = multiplier * k;
        if ((sum - subsum + qureysum) % 2 != 0)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
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