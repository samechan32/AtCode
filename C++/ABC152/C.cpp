#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int N;
    cin >> N;
    vector<int> P;
    for(int i = 0;i < N;i++){
        int p;
        cin >> p;
        P.push_back(p);
    }           
    
    int min_num = P.at(0);
    int ans = 1;

    for(int i: P){
        if(min_num > i){
            ans += 1;
            min_num = i;
        }
    }

    printf("%d", ans);
    printf("\n");
}