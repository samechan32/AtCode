#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    long N, D, X, Y, ans;
    ans = 0;
    cin >> N >> D;
    for(int i = 0; i < N; i++) {
        cin >> X >> Y;
        if(sqrt(pow(X, 2) + pow(Y, 2)) <= D) {
            ans++;
        }
    }

    cout << ans << endl;
            
}