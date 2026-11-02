#include<iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int xr=0;
    
    for(int i=0;i<n;i++){
        int nums;
        cin>>nums;
        xr^=nums;
    }

    if(n%2==1){
        cout<<xr<<endl;
    }
    else{
        if(xr==0){
            cout<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }
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