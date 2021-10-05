#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    long long N;
    cin	>> N;
    long long k = 10;
    while(true){
        if(N % k != 0){
            k *= 10;
        }else{
            break;
        }
    }
    long long ans = 0;

    string s = to_string(N);
    string x = to_string(ceil(N) - N);
    int p;
    if(N / k > 6){
        for(int i = 0;i < s.size();i++){
            p = (int)(s[i]);
            ans += p;
        }
    }else{
        ans += 1;
        
        for(int i = 0;i < x.size();i++){
            p = (int)(s[i]);
            ans += p;
        }
    }

    cout << ans << endl;
            
}