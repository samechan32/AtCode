#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int k, s;
    cin >> k >> s;

    int ans = 0;

    for(int z = 0;z <= k;z++){
        for(int y = 0;y <= k;y++){
            int x = s - z - y;
            if(x >= 0 & x <= k){
                ans += 1;
            }
        }
    }    
    
    printf("%d",ans);
    printf("\n");
}