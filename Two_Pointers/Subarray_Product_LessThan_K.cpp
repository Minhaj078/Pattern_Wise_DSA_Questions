//SlidingWindow Approach

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = 0;

        long long product = 1;
        int cnt = 0;
        if(k<=1)return 0;
        
        while(j < n){
            product *= nums[j]; //
            while(product >= k){ 
                product /= nums[i]; //If the product >=k then nums[i] joki starting mai hogi usse divide kr ke window shrink kr do
                i++; // and then window ko aage bdhao
            }
            cnt += (j - i + 1); //it will covers all the contigous subarrays
            j++;        
        }
        return cnt;        
    }
};
