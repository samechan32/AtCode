#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    string S, T, ans;
    cin >> S >> T;

    ans = "Yes";

    if(S != T.substr(0, S.size())){
        ans = "No";
    }

    cout << ans << endl;


    return 0;
}