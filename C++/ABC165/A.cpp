#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
	int K, A, B, c, k;
    cin >> K >> A >> B;
    string ans = "NG";
    c = 1;
    while(k <= B){
        k = K * c;
        if(k >= A && k <= B){
            ans = "OK";
        }
        c++;
    }

    cout << ans << endl;

    return 0;
            
}