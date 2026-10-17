#include <bits/stdc++.h> 
using namespace std;


bool isPresent(string x,string s){
    int n = x.length();
    int m = s.length();

    for(int i=0;i<=n-m;i++){
        int j=0;
        while(j<m && x[i+j]==s[j]){
            j++;
        }
        if(j==m){
            return true;
        }
    }
    return false;
}

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;

        int ans=-1;
        for(int i=0;i<=6;i++){
            if(isPresent(x,s)){
                ans=i;
                break;
            }
            x=x+x;

        }
        cout<<ans<<endl;

        
    }
    return 0;


}