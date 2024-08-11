#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <set>
using namespace std;

void solve()
{
    int a, b, n;
    cin >> a >> b >> n;
    int c = b;
    int count = 0;
    vector<int> arr(n);
    int index=0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //lets start loop will work on value of c untill itbecomes 0
    //in order to find the value of time taken by bomb
    //we will add new value to c whenever it will be one
    while (c > 0)
    {
        // check if c is equal to 1?
        if (c == 1 && index <=n - 1)
        {
            if (arr[index] >= a)
            {
                c = a;
            }
            else
            {
                c = c + arr[index];
            }
            index++;
        }
        count++;
        c--;
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