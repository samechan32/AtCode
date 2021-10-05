#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int N;
    cin >> N;
    string S;
    set<string> ans;

    for(int i = 0; i < N; i++){
        cin >> S;
        ans.insert(S);
    }

    cout << ans.size() << endl;

    return 0;

}