#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int A, B, C;
    cin >> A >> B >> C;

    string ans = "Yes";

    if(A == B & A == C & B == C|| A != B & A != C & B != C){
        ans = "No";
    }	

    cout << ans << endl;       
}