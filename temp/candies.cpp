#include "bits/stdc++.h"
#define F           first
#define S           second
#define endl        "\n"
#define pb          push_back
#define mp          make_pair
#define all(x)      x.begin(),x.end()
#define memset(a,b) memset(a,b,sizeof(a));
using namespace std;
const int inf=0x3f3f3f3f;
const int MAXN=0x7fffffff;

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int once = num_people + num_people * (num_people - 1) / 2;
        int times = candies / once;
        int last = candies % once;
        vector<int> res;
        for(int i = 1; i <= num_people; i++){
            if(last >= i){
                res.push_back(i * times + i + times * num_people);
                last = last - i;
            }else{
                res.push_back(i * times + last);
                last = 0;
            }
        }
        return res;
    }
};

int main()
{
    int a = 10, b = 3;
    Solution aa;
    vector<int> result = aa.distributeCandies(a, b);
    // cout << result << endl;

    return 0;
}