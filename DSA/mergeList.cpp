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
 
    ListNode* mergeTwoLists2(ListNode* l1, ListNode* l2) {
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        ListNode* newl = new ListNode(0);
        if(l1->val < l2->val){
            newl = l1;
            newl->next = mergeTwoLists2(l1->next, l2);
        }else{
            newl = l2;
            newl->next = mergeTwoLists2(l1, l2->next);
        }
        return newl;
    }

    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        ListNode* newl = new ListNode(0);
        ListNode* head = newl;
        while(l1 && l2){
            if(l1->val < l2->val){
                newl->next = l1;
                l1 = l1->next;
            }else{
                newl->next = l2;
                l2 = l2->next;
            }
            newl = newl->next;
        }
        newl->next = (l1 == NULL) ? l2 : l1;
        return head->next;
    }

int main()
{
    // int a[10], b[10];
    int a[2] = {1, 4};
    int b[2] = {2, 3};
    ListNode* l1 = new ListNode(0);
    ListNode* l2 = new ListNode(0);
    ListNode *h1 = l1, *h2 = l2;
    for(int i = 0; i < 2; i++){
        l1->next = new ListNode(a[i]);
        l1 = l1->next;
    }
    for(int i = 0; i < 2; i++){
        l2->next = new ListNode(b[i]);
        l2 = l2->next;
    }
    mergeTwoLists(h1->next, h2->next);
    // printf("%d", result);

    return 0;
}