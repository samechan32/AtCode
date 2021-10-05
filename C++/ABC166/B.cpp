#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int N, K, d, x, ans;
    cin >> N >> K;
    int s[N];
    ans = 0;
    for(int i = 0; i < N; i++){
        s[i] = 0;
    }
    
    for(int i = 0; i < K; i++){
        cin >> d;
        for(int z = 0; z < d; z++){
            cin >> x;
            s[x - 1] += 1;
        }
        
    }

    for(int i = 0; i < N; i++){
        //cout << s[i] << endl;
        if(s[i] == 0){
            ans++;
        }
    }

    cout << ans << endl;

    return 0;

}