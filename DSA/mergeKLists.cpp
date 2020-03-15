#include<bits/stdc++.h>
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

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
    struct cmp1{
        bool operator () (ListNode* &a, ListNode* &b) const{
            return a->val > b->val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, cmp1> pq;
        for(int i = 0; i < lists.size(); i++){
            pq.push(lists[i]);
        }
        ListNode* res, *tmp, *head;
        res = new ListNode(-1);
        head = res;
        while(!pq.empty()){
            res->next = pq.top();
            tmp = pq.top()->next;
            cout << pq.top()->val<<endl;
            pq.pop();
            if(tmp != NULL){
                pq.push(tmp);
            }
            res = res->next;
        }
        return head->next;
    }

int main()
{
    ListNode* head1, *head2, *tmp;
    head1 = new ListNode(1);
    head1->next = new ListNode(3);
    head2 = new ListNode(2);
    head2->next = new ListNode(4);
    vector<ListNode*> lists;
    lists.push_back(head1);
    lists.push_back(head2);
    mergeKLists(lists);
    return 0;
}