#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int N, M, A, a;

    cin >> N >> M;
    A = 0;
    for(int i = 0;i < M;i++){
        cin >> a;
        A += a;
    }

    int ans = N - A;

    if(ans < 0){
        ans = -1;
    }

    cout << ans << endl;

    return 0;
            
}