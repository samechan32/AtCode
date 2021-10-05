#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int N, ans;
    cin >> N;
    ans = 0;
    int A[N];

    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for(int i = 0; i < N; i++) {
        for(int z = 0; z < N; z++) {
            if(z != i && A[i] % A[z] == 0) {
                ans++;
                break;
            }
        }
    }

    cout << N - ans << endl;

    return 0;


            
}