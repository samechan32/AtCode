#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int N, ans;
    cin >> N;

    if(N % 2 == 0){
        ans = N / 2;
    }else{
        ans = N / 2 + 1;
    }

    printf("%d\n", ans);
}