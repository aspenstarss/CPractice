#include "bits/stdc++.h"
using namespace std;

    bool isNStraightHand(vector<int>& hand, int W) {
        if(hand.empty()|| hand.size() % W != 0) return false;
        unordered_map<int, int> m;
        for(int n : hand){
            m[n]++;
            cout << m[n] << " ";
        }
        // unordered_map<int, int>::iterator it, cur;
        while(!m.empty()){
            int start = (*(m.begin())).first;
            cout << m[start] << " ";
            m[start]--;
            if(m[start] == 0) m.erase(start);
            for(int i = start + 1; i < start + W; i++){
                if(m[i] == 0) return false;
                m[i]--;
                if(m[i] == 0) m.erase(i);
            }
        }
        return true;

    }

int main()
{

    vector<int> a = {1,3,2,4,5};
    bool r = isNStraightHand(a, 5);
    cout << r;
    
}