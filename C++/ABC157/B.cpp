#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int N, b;
    int A[3][3];
    bool bingo[3][3];
    for(int i = 0;i < 3;i++){
        for(int x = 0;x < 3;x++){
            cin >> A[i][x];
        }
    }
    vector<int> B;
    
    cin >> N;

    for(int i = 0;i < N;i++){
        cin >> b;
        B.push_back(b);
    }

    for(int i = 0;i < 3;i++){
        for(int x = 0;x < 3;x++){
            for(int j = 0;j < N;j++){
                if(A[i][j] == B[j]){
                    bingo[i][x] = true;
                    break;
                }else{
                    bingo[i][x] = false;
                }
            }
        }
    }

    string ans = "No";

    for(int i = 0;i < 3;i++){
        if(bingo[i][0] and bingo[i][1] and bingo[i][2]){
            ans = "Yes";
        }
    }

    for(int i = 0;i < 3;i++){
        if(bingo[0][i] and bingo[1][i] and bingo[2][i]){
            ans = "Yes";
        }
    }

    if(bingo[0][0] and bingo[1][1] and bingo[2][2]){
        ans = "Yes";
    }

    if(bingo[0][2] and bingo[1][1] and bingo[2][0]){
        ans = "Yes";
    }

    cout << ans << endl;   
}