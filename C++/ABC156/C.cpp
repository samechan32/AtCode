#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int N, n, m;
    cin >> N;
    int X[N];
    m = 0;
    for(int i = 0; i < N; i++){
        cin >> X[i];
        m = max(m, X[i]);
    }

    int ans = 999999;
    for(int i = 1; i < m + 1; i++){
        n = 0;
        for(int x = 0; x < N; x++){
            n += (i - X[x]) * (i - X[x]);
        }

        ans = min(ans, n);
    }

    cout << ans << endl;

    return 0;
            
}