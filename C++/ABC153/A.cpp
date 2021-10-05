#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int H, A, ans;

    cin >> H >> A;
    ans = 0;

    while(H > 0){
        H -= A;
        ans += 1;
    }

    cout << ans << endl;
}