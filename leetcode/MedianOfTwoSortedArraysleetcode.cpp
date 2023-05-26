class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size()+nums2.size();
        int nums[n];
        int mid=n/2;
        double median;
        int i=0,j=0,k=0,count=0,curr;
        while(count<n){
            if(i<nums1.size() and j<nums2.size()){
                if(nums1[i]<=nums2[j]){
                    curr=nums1[i++];
                }
                else{
                    curr=nums2[j++];
                }
            }
            else if(i<nums1.size()){
                curr=nums1[i++];
            }
            else{
                curr=nums2[j++];
            }
            nums[k++]=curr;
            count++;
        }
        if(n%2==0){
            median=nums[mid]+nums[mid-1];
            median/=2;
        }
        else{
            median=nums[mid];
        }
        return median;
    }
};