#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int N, M, X;
    cin >> N >> M >> X;
    int CA[M + 1][N];

    int total = 0;
    for(int i = 0;i < N; i++) {
        for(int z = 1; z < M; z++) {
            total += CA[i][z];
            if(total >= X) {
                break;
            }
        }
    }
            
}