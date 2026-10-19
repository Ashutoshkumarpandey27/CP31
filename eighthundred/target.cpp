#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        
        vector<string>a(10);
        int ans=0;
        for(int i=0;i<10;i++){
              cin>>a[i];
        }

        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(a[i][j]=='X'){
                    int points=min({i,j,9-i,9-j})+1;
                    ans+=points;
                }
            }
        }
        cout<<ans<<endl;
        
    }
    return 0;
}