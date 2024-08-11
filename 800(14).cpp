#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <set>
using namespace std;

void solve(){
    long long a,b,c;
    cin>>a>>b>>c;
    long long total = a+b+c;
    long aSumb = total - c;

    if (c % 2 == 0)
    {
        if (a > b)
        {
            cout << "First";
        }
        else
        {
            cout << "Second";
        }
    }

    else
    {

        if (b > a)
        {
            cout << "Second";
        }
        else
        {
            cout << "First";
        }
    }

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