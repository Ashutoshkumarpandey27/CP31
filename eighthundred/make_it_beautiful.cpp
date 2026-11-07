#include<iostream>
#include<vector>

#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end());

        if(arr[0]==arr[n-1]){
            cout<<"NO"<<endl;
            continue;
        }
        else{
            swap(arr[0],arr[n-1]);
            cout<<"YES"<<endl;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;




    }
    return 0;
}
