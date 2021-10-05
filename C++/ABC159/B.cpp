#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    string s, ans;
    int n;
    cin >> s;
    n = s.size();
    ans = "Yes";

    if(s.substr(0, (n - 1) / 2) != s.substr((n + 3) / 2 - 1, n)){
        ans = "No";
    }

    cout << ans << endl;
    
    return 0;
}