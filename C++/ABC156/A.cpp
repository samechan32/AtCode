#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int N, R;

    cin >> N >> R;

    int ans = R;

    if(N < 10){
        ans = R + (10 - N) * 100;
    }

    cout << ans << endl;       
            
}