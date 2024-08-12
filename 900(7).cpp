#include <iostream>
#include<algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <set>
typedef long long int ll;
using namespace std;

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    vector<ll>c(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    // lets sort the given array
    sort(v.begin(),v.end());
    //ll count=0;
    //mujhe i ya fir different parts of array 
    //which are balanced to be stored
    ll count =1;
    for(int j=0;j<n && j+1<n;j++)
    {    
        count++;
        if(v[j+1]-v[j]>k){
            //ye wala j apne pass lena pdega
            c.push_back(count);
            count=0;
            //ek bn jaega vector jismei saare index aajenge from 1 to n
        }        
    }
    ll max_coiunt=*max_element(c.begin(),c.end());
    cout<<(n-max_coiunt);
    cout<<endl;


    //mere pass wo saare j aa chuke hain index vector ke andr
    //jinmei j and j+1 ka difference k se jyda hai
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