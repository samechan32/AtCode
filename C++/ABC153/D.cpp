#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    long long H;
    cin >> H;

    long long ans = 0;
    long long c = 0;
    while(H > 0){
        if(H == 1){
            H = 0;
        }else{
            H = ceil(H / 2);
            
        }
        ans += pow(2, c);
        c += 1;
    }

    cout << ans << endl;            
}