#include <bits/stdc++.h>

using namespace std;

#define max(a, b) ((a > b) ? a : b)
#define min(a, b) ((a < b) ? a : b)

class Solution{
    public:
    //O(log(min(m, n)))
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

    //O(n+m)
    double findMedianSortedArrays2(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        
        int mid1, mid2;
        int flag;
        if((n1 + n2) % 2){
            flag = 1;
            mid1 = (n1 + n2) / 2;
        }else{
            flag = 0;
            mid1 = (n1 + n2) / 2;
            mid2 = mid1 - 1;
        }
        if(n1 == 0){
            if(flag){
                return double(nums2[mid1]);
            }else{
                return (nums2[mid1] + nums2[mid2]) / 2.0;
            }
        }
        if(n2 == 0){
            if(flag){
                return double(nums1[mid1]);
            }else{
                return (nums1[mid1] + nums1[mid2]) / 2.0;
            }
        }
        int i = 0, j = 0;
        vector<int> sorted;
        while((i < n1) && (j < n2)){
            if(nums1[i] < nums2[j]){
                sorted.push_back(nums1[i++]);
            }else{
                sorted.push_back(nums2[j++]);
            }
        }
        while(i < n1){
            sorted.push_back(nums1[i++]);
        }
        while(j < n2){
            sorted.push_back(nums2[j++]);
        }
        
        if(flag){
            return double(sorted[mid1]);
        }else{
            double result;
            result = (sorted[mid1] + sorted[mid2]) / 2.0;
            return result;
        }
    }
};

int main(){
    vector<int> nums1 = { 2,3, 5 };
	vector<int> nums2 = { 1,4,7, 9 };
	
	Solution solution;
	double ret;
    ret = solution.findMedianSortedArrays(nums1, nums2);
    printf("%f", ret);
	return 0;


// int main(){
//     vector<int> nums1, nums2;
//     int n, m, t;
//     scanf("%d", &n);
//     scanf("%d", &m);
//     for(int i = 0; i < n; i++){
//         scanf("%d", &t);
//         nums1.push_back(t);
//     }
//     for(int i = 0; i < m; i++){
//         scanf("%d", &t);
//         nums2.push_back(t);
//     }

//     int result = findMedianSortedArrays(nums1, nums2);
//     printf("%d", result);
//     return 0;
}