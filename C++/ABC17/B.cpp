#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    string X, ans;
    cin >> X;
    int n = 1;

    ans = "YES";

    while( n < X.size() ) {
        if( X[n - 1] == 'o' || X[n - 1] == 'k' || X[n - 1] == 'u') {
            n += 1;
        } else if (X[n - 1] == 'c' && X[n] == 'h') {
            n += 2;
        } else {
            ans = "NO";
            break;
        }
    }

    cout << ans << endl;

    return 0;
            
}