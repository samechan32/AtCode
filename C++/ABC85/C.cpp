#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int N, Y;
    cin >> N >> Y;
    int ans1 = -1;
    int ans2 = -1;
    int ans3 = -1;
    for(int i = 0;i <= N;i++){
        for(int x = 0;x <= N - i;x++){
            int z = N - i - x;
            if(i * 10000 + x * 5000 + z * 1000 == Y){
                ans1 = i;
                ans2 = x;
                ans3 = z;
                goto finish;
            }
        }
    }
    finish:
    cout << ans1 << " " << ans2 << " " << ans3 << endl;   
}