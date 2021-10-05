#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int N, K;
    vector<int> P;
    vector<int> M;
    cin >> N >> K;
    int a;
    for(int i = 0;i < N;i++){
        cin >> a;
        if(a >= 0){
            P.push_back(a);
        }else{
            M.push_back(a);
        }
    }

    sort(P.begin(), P.end());
    reverse(P.begin(), P.end());
    sort(M.begin(), M.end());
    //reverse(M.begin(), M.end());
    int count = 0;
    int ans = 0;
    for(int i = 0;i < P.size();i++){
        for(int x = 0;x < M.size();x++){
            count++;
            if(count == K){
                ans = P.at(i) * M.at(x);
                break;
            }
        }
    }

    cout << ans << endl;   
}