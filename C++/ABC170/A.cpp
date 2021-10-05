#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int x1, x2, x3, x4, x5, ans;
    cin >> x1 >> x2 >> x3 >> x4 >> x5;

    if(x1 == 0){
        ans = 1;
    } else if (x2 == 0) {
        ans = 2;
    } else if (x3 == 0) {
        ans = 3;
    } else if (x4 == 0) {
        ans = 4;
    } else if (x5 == 0) {
        ans = 5;
    }

    cout << ans << endl;

    return 0;
            
}