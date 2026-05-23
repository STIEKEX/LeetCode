class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int idx = 0 ; 
        int m = nums1.size() ; 
        int n = nums2.size() ;
        vector<int> newNum ; 
        for(int val : nums1){
            newNum.push_back(val) ;
        }
        for(int val : nums2){
            newNum.push_back(val) ;
        }
        sort(newNum.begin() , newNum.end()) ;
        double median = 0 ;
        int size = newNum.size() ; 
        int st = 0 , end = size-1; 
        int mid = (st+ (end-st))/2 ;
        if(size%2 ==0){
            median = (newNum[mid]+newNum[mid+1])/2.0 ;
            return median ;
           
        }
        return newNum[mid] ;
        



        
        
    }
};