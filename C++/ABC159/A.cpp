#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int n, m, ans;
    cin >> n >> m;

    ans = n * (n - 1) / 2 + m * (m - 1) / 2;

    cout << ans << endl;

    return 0;
            
}