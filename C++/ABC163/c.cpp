#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int N;
    cin >> N;
    int A[N-1];
    int ans[N];
    ans[N-1] = 0;
   
    for(int i = 0; i < N-1; i++){
        cin >> A[i];
        ans[i] = 0;
    }
    

    for(int i = 0; i < N-1; i++){
        ans[A[i]-1] += 1;
    }

    for(int i = 0; i < N; i++){
        cout << ans[i] << endl;
    }

    return 0;
            
}