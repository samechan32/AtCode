#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int N, ans;
    cin >> N;
    ans = 0;
    int c = 2;
    while(N > 1){ 
        
        if(N % c == 0){
            N = N / c;
            ans++;
        } 
        c++;
      	c = N % c;
        if(N < c){
            break;
        }
            
 
    }
 
    cout << ans << endl;
}
