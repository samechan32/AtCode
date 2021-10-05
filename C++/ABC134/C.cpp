#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int N, a;
    vector<int> A;
    vector<int> V;

    cin >> N;
    for(int i = 0;i < N;i++){
        cin >> a;
        A.push_back(a);
    }
    resize()
    copy(A.begin(), A.end(), V.begin());
    sort(V.begin(), V.end());
    int max_num = V.at(0);
    int second_num = V.at(1);

    for(int i = 0;i < N;i++){
        if(A.at(i) == max_num){
            cout << second_num << endl;
        }else{
            cout << max_num << endl;
        }
    }


            
}