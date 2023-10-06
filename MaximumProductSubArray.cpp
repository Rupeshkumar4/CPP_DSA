#include <iostream>
#include <vector>
using namespace std;

int maxProductSubArray(vector<int> &nums){
    int ans = INT_MIN;
    int prefix = 1, suffix = 1;
    int n = nums.size(); 
    int pr = 1;
    
    for(int i = 0; i < n; i++){
        if(prefix == 0) prefix = 1;
        if(suffix == 0) suffix = 1;
        
        prefix *= nums[i]; 
        suffix *= nums[n - i - 1]; 
        
        ans = max(ans, max(prefix, suffix));
    }
    
    return ans;
}

int main() {
    vector<int> nums = {1, 2, -3, 0, -4, -5};
    cout << "The maximum product subarray: " << maxProductSubArray(nums) << endl;
    return 0;
}
