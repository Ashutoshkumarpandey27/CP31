
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> a(n);

        int total = 0;

        for(int i=0;i<n;i++){
            cin>>a[i];

            if(a[i] == 2){
                total++;
            }
        }

        int ans=-1;
        int left=0;

        for(int k=1;k<n;k++){

            if(a[k-1] == 2){
                left++;
            }

            int right = total-left;

            if(left == right){
                ans=k;
                break;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
