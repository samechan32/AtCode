#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int N, K;
    cin >> N >> K;
    vector<int> H;

    for(int i = 0; i < N;i++){
        int h;
        cin >> h;
        H.push_back(h);
    }

    sort(H.begin(), H.end());
    reverse(H.begin(), H.end());
    int64_t ans = 0;
    for(int i = K;i < H.size();i++){
        ans += H.at(i);
    }           
    
    cout << ans << endl;
}