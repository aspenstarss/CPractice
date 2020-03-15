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

class MaxQueue {
public:
    queue<int> q;
    deque<int> dq;

    MaxQueue() {
        // queue<int> q;
        // deque<int> dq;
    }
    
    int max_value() {
        return dq.front();
    }
    
    void push_back(int value) {
        q.push(value);
        while(!dq.empty() && dq.back() < value){
            dq.pop_back();
        }
        dq.push_back(value);
    }
    
    int pop_front() {
        int val = q.front();
        q.pop();
        if(dq.front() == val){
            dq.pop_front();
        }
        return val;
    }
};
int main()
{
    MaxQueue mq;
    mq.push_back(1);
    cout << mq.max_value() << endl;
    mq.push_back(2);
    cout << mq.max_value() << endl;
    mq.pop_front();
    cout << mq.max_value() << endl;
    return 0;
}