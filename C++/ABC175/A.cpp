#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    string S;
    cin >> S:
    int ans = 0;

    for(int i = 1; i < S.size(); i++) {
        if(S[i - 1] == S[i] & S[i] =='R') {
            ans++;
        }
    }		

    cout << ans << endl;
            
}