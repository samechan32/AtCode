#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int H, N;
    cin >> H >> N;
    vector<int> A;
    string ans = "No";
    for(int i = 0;i < N;i++){
        int a;
        cin >> a;
        A.push_back(a);
    }
    
    int A_sum = accumulate(A.begin(), A.end(), 0);

    if(A_sum >= H){
        ans = "Yes";
    }

    cout << ans << endl;
}