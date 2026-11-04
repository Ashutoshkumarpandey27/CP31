#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        int cnt = 0;

        for(int i=0; i<n/2; i++){

            if(s[i] != s[n-1-i]){
                cnt++;
            }
            else{
                break;
            }
        }

        cout << n-(2*cnt) << endl;
    }

    return 0;
}