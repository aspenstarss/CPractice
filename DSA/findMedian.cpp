#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1000;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size();
    int n2 = nums2.size();
    
    if(n1 > n2){
        return findMedianSortedArrays(nums2, nums1);
    }

    int lo = 0, hi = 2*n1, c1, c2;
    int L1max, L2max, R1min, R2min;
   while (lo < hi)
   {
       c1 = (lo + hi) / 2;
       c2 = n1 + n2 - c1;

       L1max = (c1 == 0) ? INT_MIN : nums1[(c1 - 1) / 2];
       R1min = (c1 == 2*n1) ? INT_MAX : nums1[c1 / 2];
       L2max = (c2 == 0) ? INT_MIN : nums2[(c2 - 1) / 2];
       R2min = (c2 == 2*n2) ? INT_MAX : nums2[c2 / 2];

       if(L1max > R2min){
           hi = c1 - 1;
       }else if(L2max > R1min)
       {
           lo = c1 + 1;
       }else
       {
           break;
       }
   }
   return (max(L1max, L2max) + min(R1min, R2min)) / 2.0;
}

int main(){
    vector<int> nums1, nums2;
    int n, m, t;
    scanf("%d", &n);
    scanf("%d", &m);
    for(int i = 0; i < n; i++){
        scanf("%d", &t);
        nums1.push_back(t);
    }
    for(int i = 0; i < m; i++){
        scanf("%d", &t);
        nums2.push_back(t);
    }

    int result = findMedianSortedArrays(nums1, nums2);
    printf("%d", result);
    return 0;
}