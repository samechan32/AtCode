#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int N;
    vector<int> A;
    cin >> N;
    int a;
    string ans = "APPROVED";
    for(int i = 0;i < N;i++){
        cin >> a;
        A.push_back(a);
    }

    for(int i = 0;i < N;i++){
        int n = A.at(i);
        if(n % 2 == 0){
            if(n % 3 != 0 & n % 5 != 0){
                ans = "DENIED";
                break;
            }
        }
    }

    cout << ans << endl;
            
}