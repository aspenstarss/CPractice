#include <bits/stdc++.h>
using namespace std;

class CombinationIterator{
    private:
        string rstr;
        int curr;
        int cl;
    
    public:
        CombinationIterator(string characters, int combinationLength) {
            reverse(characters.begin(), characters.end());
            rstr = characters;
            curr = (1 << rstr.size()) - 1;
            cl = combinationLength;
        }

        int countOne(int n){
            int count = 0;
            while(n != 0){
                count++;
                n = n & (n - 1);
            }
            return count;
        }
        
        string next() {
            while(curr >= 0 && countOne(curr) != cl){
                curr--;
            }
            string res;
            for(int i = 0; i < rstr.size(); i++){
                if((curr & (1 << i)) >> i){
                    res = rstr[i] + res;
                }
            }
            curr--;
            return res;
        }
        
        bool hasNext() {
            if(curr >> cl > 0) return true;
            
            return false;
        }
};
    
int main(){
    string str;
    int n;
    cout << "Enter String:";
    cin >> str;
    cout << "Enter n:";
    cin >> n;
    CombinationIterator ci(str, n);
    while(ci.hasNext()){
        cout << ci.next() << endl;
    }
    return 0;
}