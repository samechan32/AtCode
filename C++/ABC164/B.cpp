#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    while(A > 0 || C > 0){
        C -= B;
        if(C <= 0){
            break;
        }
       
        A -= D;
    }

    if(A <= 0){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }

    return 0;
            
}