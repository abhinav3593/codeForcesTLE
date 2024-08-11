#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <set>
using namespace std;
void solve(){
    int a, b, n;
    cin >> a >> b >> n;
    int c = b;
    vector<int> arr(n);
    int index=0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        c+=min(a-1,arr[i]);
    }
    cout<<c<<endl;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}