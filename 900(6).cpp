#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <set>
typedef long long int ll;
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll count=0;
    // odd
    if(n%2!=0){
        cout<<1<<endl;
        return;
    }
   //even
    else
    {
        if (n%3==0)//divisible by 3......
        {
            for (int i = 0; i < n+1; i++){
                
                if(n%(i+1)!=0){
                    cout<<i<<endl;
                    return;
                }
            }
            
            
        }
     //3 se divisible nahi hai........
        
        cout<<2<<endl;
        return;
    
        
    }
    }
   

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }    
    return 0;
}

// while(n%i==0){
        //     count++;
        //     if(n%(i+1)==0){
        //         i++;
        //     }
        //     else{
        //         i--;
        //     }
        // }