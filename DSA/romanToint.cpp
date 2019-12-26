#include <bits/stdc++.h>
using namespace std;

int func(vector<int>& nums);
int romanToInt(string s) {
    int res = 0;
    int i = 0;
    int n = s.length();
    unordered_map<string, int> m;
    m["I"] = 1; m["V"] = 5; m["X"] = 10; m["L"] = 50;
    m["C"] = 100; m["D"] = 500; m["M"] = 1000;
    m["IV"] = 4; m["IX"] = 9; m["XL"] = 40;
    m["XC"] = 90; m["CD"] = 400; m["CM"] = 900;
    while(i < n){
        switch(s[i]){
            case 'I':
                if(i+1 < n && s[i+1] == 'V'){
                    res += m["IV"];
                    i += 2;
                }else if(i+1 < n && s[i+1] == 'X'){
                    res += m["IX"];
                    i += 2;
                }else{
                    res += m["I"];
                    i++;
                }
                break;
            case 'X':
                if(i+1 < n && s[i+1] == 'L'){
                    res += m["XL"];
                    i += 2;
                }else if(i+1 < n && s[i+1] == 'C'){
                    res += m["XC"];
                    i += 2;
                }else{
                    res += m["X"];
                    i++;
                }
                break;
            case 'C':
                if(i+1 < n && s[i+1] == 'D'){
                    res += m["CD"];
                    i += 2;
                }else if(i+1 < n && s[i+1] == 'M'){
                    res += m["CM"];
                    i += 2;
                }else{
                    res += m["C"];
                    i++;
                }
                break;
            default:
                string t;
                t = s[i];
                res += m[t];
                i++;
        }
    }
    return res;
}

int main(){
    string s;
    cin >> s;
    printf("%d", romanToInt(s));
    return 0;
}
