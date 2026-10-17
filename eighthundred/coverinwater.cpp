#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int count=0;

        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                count++;

            }

        }
        for(int i=0;i<n-2;i++){
            if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
                count=2;
                break;
            }
        }
        cout<<count<<endl;
    }
}