#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int N, K, M, a, ans;
    cin >> N >> K >> M;

    vector<int> A;

    for(int i = 0;i < N - 1;i++){
        cin >> a;
        A.push_back(a);
    }

    ans = max(M * N - accumulate(A.begin(), A.end(), 0), 0);

    if(ans > K){
        ans = -1;
    }

    printf("%d", ans);
    cout << endl;
            
}