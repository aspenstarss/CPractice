#include <bits/stdc++.h>

using namespace std;

#define max(a, b) ((a > b) ? a : b)
#define min(a, b) ((a < b) ? a : b)

class Solution{
    public:
    //O(log(min(m, n)))
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
        int n = nums1.size();
        int m = nums2.size();
        if(n > m){
            return findMedianSortedArrays(nums2, nums1);
        }

        int Lmax1, Lmax2, Rmin1, Rmin2, c1, c2;
        int lo = 0, hi = 2*n;

        while(lo <= hi){
            c1 = (lo + hi) / 2;
            c2 = m + n - c1;

            Lmax1 = (c1 == 0) ? INT_MIN : (nums1[(c1 -1) / 2]);
            Rmin1 = (c1 == 2 * n) ? INT_MAX : (nums1[c1 / 2]);
            Lmax2 = (c2 == 0) ? INT_MIN : (nums2[(c2 - 1) / 2]);
            Rmin2 = (c2 == 2 * m) ? INT_MAX : (nums2[c2 / 2]);

            if(Lmax1 > Rmin2){
                hi = c1 - 1;
            }else if(Lmax2 > Rmin1){
                lo = c1 + 1;
            }else{
                break;
            }
        }

        return (max(Lmax1, Lmax2) + min(Rmin1, Rmin2)) / 2.0;
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
}