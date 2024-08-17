#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <set>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int j = 0; j < n-1; j++)
    {
        if(arr[j]==1){
            arr[j]=arr[j]+1;
        }
        if(arr[j]==arr[j-1]){arr[j]= arr[j]+1;}
        
        if(arr[j+1]%arr[j]==0){
            arr[j+1]= arr[j+1]+1;
        }
        
    }
    for (int k = 0; k < n; k++)
    {
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}