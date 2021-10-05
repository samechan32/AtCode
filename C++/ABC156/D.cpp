#include<bits/stdc++.h>
using namespace std;
                    

double factorial( int x )
{
int tmp = x;
if(tmp == 0){
    return 1;
}
for( int i = 1; i < x-1 ;++i )
tmp *= x-i;
return tmp;
}

int main(){
    long long n, a, b, N;
    double ans;
    cin >> n >> a >> b;
    ans = 0;
    N = factorial(n);
    for(int i = 1;i < n+1;i++){
        if(i == a | i == b){
            continue;
        }
        
        ans += N / (factorial(i) * factorial((n - i))); 
        cout << n - i << endl;
    }

    cout << ans / 1000000007 << endl;


            
}