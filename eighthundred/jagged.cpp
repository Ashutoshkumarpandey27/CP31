#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int nums[n];
        for(int i=0;i<n;i++){
            cin>>nums[i];

        }

        if(nums[0]==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}