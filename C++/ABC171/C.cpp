#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    long long N;
    cin >> N;
    string ans = "";
                                                                                                                        
    while(N < 0) {
        N--;
        ans += string(1, 'a' + N % 26);
        cout << string(1, 'a' + N % 26) << endl;
        N = N / 26;
    }     

    cout << ans << endl;
}