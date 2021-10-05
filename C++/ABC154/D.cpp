#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int N, K;
    cin >> N >> K;

    vector<int> P;
    int p;
    for(int i = 0;i < N;i++){
        cin >> p;
        P.push_back(p);
    }

    double ans = 0;
    vector<double> D;
    double d;
    for(double i = 1; i <= 1000;i++){
        d = (i / 2) * (1 + i) / i;
        D.push_back(d);
    }
    for(int i = N-1; i >= K-1;i--){
        for(int x = i;x > i-K;x--){
            p = P.at(x) - 1;
            d = D.at(p);
            cout << d << endl;
        }
        if(d > ans){
            ans = d;
        }

        d = 0;
    }

    cout << ans << endl;
            
}