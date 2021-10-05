#include<bits/stdc++.h>
using namespace std;
                    
                    
int main(){
    int N;
    cin >> N;
    vector<string> S;
    string s;
    vector<string> ans_list;
    for(int i = 0;i < N;i++){
        cin >> s;
        S.push_back(s);
    }

    sort(S.begin(), S.end());
    string o = S.at(0);
    string t;
    int count = 0;
    int max_count = 0;
    for(int i = 1;i < N;i++){
        t = S.at(i);
        if(o == t){
            count++;
        }else{
            if(count == max_count){
                ans_list.push_back(o);
            }else if(count > max_count){
                ans_list.erase(ans_list.begin(), ans_list.end());
                ans_list.push_back(o);
                max_count = count;
            }
            count = 0;
        }
        o = t;
    }
    if(count == max_count){
        ans_list.push_back(o);
    }else if(count > max_count){
        ans_list.erase(ans_list.begin(), ans_list.end());
        ans_list.push_back(o);
    }
    sort(ans_list.begin(), ans_list.end());
    for(int i = 0;i < ans_list.size();i++){
        cout << ans_list.at(i) << endl;
    }


            
}