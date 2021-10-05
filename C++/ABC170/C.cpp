#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int X, N, ans, c;
    cin >> X >> N;
    int p[N];
    for(int i = 0; i < N; i++) {
        cin >> p[i];
    }

    c = 100000;
    bool flag;
    for(int i = 0; i < 102; i++) {
        flag = true;
        for(int z = 0; z < N; z++) {
            if(i == p[z]) flag = false;
        }
        if(flag) {
            if(c > abs(i - X)) {
                ans = i;
                c = abs(i - X);
            }
        }
    }

    cout << ans << endl;

    return 0;

            
}