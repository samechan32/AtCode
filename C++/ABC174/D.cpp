#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    long N, W, R, ans;
    ans = 0;
    W = 0;
    R = 0;
    cin >> N;
    string c;
    cin >> c;

    for(int i = 0; i < N / 2; i++) {
        if(c[i] == 'W') {
           W++;
        }
    }

    for(int i = N / 2; i < N; i++) {
        if(c[i] == 'R') {
           R++;
        }
    }
    
    if(R == 0 || W == 0) {
        ans = 0;
    } else {
        ans = max(W, R);
    }

    cout << ans << endl;

            
}