#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int N, K;

    cin >> N >> K;

    int ans = 1;

    while(N >= K){
        N = N / K;
        ans += 1;
    }

    cout << ans << endl; 
            
}