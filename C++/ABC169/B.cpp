#include<bits/stdc++.h>
using namespace std;

#define n 9999999
#define X 1000000000000000000
                 
int main(){
    unsigned long long N, ans, a;
    vector<unsigned long long> A;
    cin >> N;

    ans = 1;
    for(int i = 0; i < N; i++){
        cin >> a;
        A.push_back(a);
    }
    sort(A.begin(), A.end());

    for(int i = 0; i < N; i++){
        ans *= A.at(i);
        if(ans > X){
            ans = -1;
            break;
        }
        
    }


    cout << ans << endl;

    return 0;

    
            
}