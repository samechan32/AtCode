#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int N;
    cin >> N;
    vector<int> A;
    int a;
    string ans = "YES";
    
    for(int i = 0;i < N;i++){
        cin >> a;
        A.push_back(a);
    }
    
    sort(A.begin(), A.end());
    
   
    for(int i = 1;i < N;i++){
        if(A.at(i-1) == A.at(i)){
            ans = "NO";
            break;
        }
    }
    cout << ans << endl;
}