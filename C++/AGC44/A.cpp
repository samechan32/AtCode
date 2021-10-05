#include<bits/stdc++.h>
using namespace std;

long long check(long long n, long long a, long long b, long long c, long long d){
    long long x = 0;
     while(n != 1){
            cout << "n :" << n << endl;
            if(n % 15 == 0){
                n /= 15;
                x += min(b * 5, d * 3);
            } else if(n % 10 == 0){
                n /= 10;
                x+= min(a * 5, d * 2);
            } else if(n % 6 == 0){
                n /= 6;
                x += min(a * 3, b * 2);
            } else if(n % 5 == 0){
                n /= 5;
                x += d;
            } else if(n % 3 == 0){
                n /= 3;
                x += b;
            } else if(n % 2 == 0){
                n /= 2;
                x += a;
            } else {
                return 99999999999999;
            }
        } 
    
    return x;
    
}
                    
                    
int main(){
    long long t, n, a, b, c, d, x, n1;
    cin >> t;
    long long ans[t];
    for(int i = 0; i < t; i++){
        x = 0;
        cin >> n >> a >> b >> c >> d;
        ans[i] = d;
       if(n % 2 == 0 | n % 5 == 0 | n % 3 == 0){
           ans[i] += check(n, a, b, c, d);
       } else {
           ans[i] += min(check(n - 1, a, b, c, d), check(n + 1, a, b, c, d));
           ans[i] += d;
       }

    }


    for(int i = 0; i < t;i++){
        cout << ans[i] << endl;
    }
            
}