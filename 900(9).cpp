#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <set>
#include<limits.h>
typedef long long int ll;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int k =0;
    for (int j = 0; j<n; j++)
    {
        if(arr[j]!=j+1){
            k=gcd(k,abs(arr[j]-j-1));
        }
    }
    cout<<k<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}