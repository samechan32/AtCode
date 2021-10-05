#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double ans;
    ans = (double)(abs(x1 - x2)) * (double)(abs(y1 - y3)) / 2.0;

    cout << ans << endl;

    return 0;
            
}