#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include<set>
using namespace std;
void solve(){
    int n,x;
    int minfuelTank = 0;
    cin>>n>>x;
    vector<int>arr(n+2);
    arr[0]=0;
    arr[n+1]=x;
    for (int i = 1; i < n+1; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i<n+1; i++)
    {
        minfuelTank = max(minfuelTank,arr[i+1]-arr[i]);
        
    }
    minfuelTank= max(minfuelTank,2*(arr[n+1]-arr[n]));
    cout<<minfuelTank;

    cout<<endl;
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