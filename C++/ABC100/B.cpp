#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int D, N, ans;
    cin >> D >> N;
    if(D == 0){
        if(N < 100){
            ans = N;
        } else {
            ans = N + N % 100;
        }
        
    } else {
        ans = pow(100, D) * N;
    }

    cout << ans << endl;

    return 0;
            
}