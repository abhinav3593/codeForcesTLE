#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve()
{
    int n, k;
    cin >>n>> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (k==1 && !is_sorted(arr.begin(),arr.end()))
    {
        cout<<"NO";
        /* code */
    }
    else
    {
        cout<<"YES";
    }
    cout<<endl;
    
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }

    return 0;
}