#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    long K, ans;
    ans = 0;
    cin >> K;
    if(K % 2 == 0) {
        cout << "-1" << endl;
    } else {
        string s = "";
        for(int i = 1; i < pow(10, 6); i++) {
            s += "7";
            if(atoi(s.c_str()) % K == 0) {
                ans = s.size();
                break;
            }
        }
        cout << ans << endl;
    }

    
            
}