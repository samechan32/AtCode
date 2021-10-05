#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    string n;
    cin >> n;
    n = n[n.size() - 1];
    if(n == "2" | n == "4" | n == "5" | n == "7" | n == "9"){
        cout << "hon" << endl;
    }else if(n == "0" | n == "1" | n == "6" | n == "8"){
        cout << "pon" << endl;
    }else{
        cout << "bon" << endl;
    }

    return 0;
            
}