#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <set>
using namespace std;
void solve(){
    long long n;
    cin >> n;
    string s;
    // taking input
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    long long answer = 1;
    long long3 count = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            count = 1;
        }
        else
        {
            count++;
        }
        answer = max(answer, count);
    }
    cout << answer + 1 << endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}