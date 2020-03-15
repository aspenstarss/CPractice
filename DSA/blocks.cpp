#include <bits/stdc++.h>
using namespace std;

vector<int> blocks(string &s){
    char b = s[0];
    vector<int> res;
    for(int i = 1; i < s.length() - 1; i++){
        if(s[i] != b){
            res.push_back(i+1);
            s[i] = b;
            if(s[i+1] == 'B') s[i+1] = 'W';
            else s[i+1] = 'B';
        }
    }
    int n = s.length();  
    if(s[n-2] != s[n - 1]){
        b = s[n - 1];
        for(int i = n - 2; i > 0; i--){
            if(s[i] != b){
                res.push_back(i);
                s[i] = b;
                if(s[i-1] == 'B') s[i-1] = 'W';
                else s[i-1] = 'B';
            }
        }
    }
    if(s[0] == s[1]) return res;
    // if(res.size() == 0) return {};
    else return {-1};
}

int main(){
    int t;
    cin >> t;
    string s;
    cin >> s;
    vector<int> r = blocks(s);
    int n = r.size();

    if(n == 0) cout << 0;
    else if(r[0] == -1){
        cout << r[0] << endl;
    }else{
        cout << n << endl;
        for(int i = 0; i < n; i++){
            cout << r[i] << " ";
        }
    }
    return 0;
}