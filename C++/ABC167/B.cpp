#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int A, B, C, K, ans;
    cin >> A >> B >> C >> K;
    ans = 0;

    if(A > K){
        ans = K;
    } else if(A + B >= K) {
        ans = A;
    } else {
        ans = A - (K - A - B);
    }

    cout << ans << endl;

    return 0;
            
}