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

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

    ListNode* getNext(ListNode* head, int n){
        ListNode* pnode = head;
        while(--n && pnode){
            pnode = pnode->next;
        }
        if(!pnode) return pnode;
        ListNode *next = pnode->next;
        pnode->next = NULL;
        return next;
    }

    ListNode* sortNode(ListNode* p1, ListNode* p2){
        ListNode* phead = new ListNode(-1);
        ListNode* pnode = phead;
        while(p1 != NULL && p2 != NULL){
            if(p1->val < p2->val){
                pnode->next = p1;
                p1 = p1->next;
            }else{
                pnode->next = p2;
                p2 = p2->next;
            }
            pnode = pnode->next;
        }
        pnode->next = p1 ? p1 : p2;
        return phead->next;
    }

    ListNode* sortList(ListNode* head) {
        int len = 0;
        ListNode* pnode = head;
        while(pnode){
            pnode = pnode->next;
            len++;
        }

        ListNode* dummy = new ListNode(-1);
        dummy->next = head;

        for(int i = 1; i < len; i = i << 1){
            ListNode *pcur, *ptail;
            pcur = dummy->next;
            ptail = dummy;
            while(pcur){
                ListNode* pleft, *pright;
                pleft = pcur;
                pright = getNext(pleft, i);
                pcur = getNext(pright, i);

                ptail->next = sortNode(pleft, pright);
                while(ptail->next){
                    ptail = ptail->next;
                }
            }
        }
        return dummy->next;
    }

int main()
{
    ListNode* head = new ListNode(-1);
    ListNode* pnode = head;
    vector<int> nums{4, 2, 1, 3};
    for(auto num : nums){
        pnode->next = new ListNode(num);
        pnode = pnode->next;
    }
    sortList(head->next);
    return 0;
}