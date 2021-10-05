#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    long long X, x, ans;
    cin >> X;
    ans = 0;
    x = 100;

    while(x < X){
        x *= 1.01;
        ans++;
    }

    cout << ans << endl;

    return 0;
            
}