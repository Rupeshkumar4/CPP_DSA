#include <iostream>
#include <vector>
using namespace std;
bool ls(vector<int>nums,int x)
{
    for(int i=0; i<nums.size(); i++) {
        if(nums[i]==x) return true;
    }
    return false;
}

int longestConsecutive(vector<int>& nums)
{
    int ans=1;
    for(int i=0; i<nums.size(); i++) {
        int x=nums[i];
        int maxi=1;
        while(ls(nums,x+1)) {
            x++;
            maxi++;
        }
        ans=max(ans,maxi);
    }

    return ans;
}

int main()
{
    // Example usage of the longestConsecutive function
    vector<int>nums(6);
    // nums={100, 4, 200, 1, 3, 2};
    nums.push_back(100);
    nums.push_back(4);
    nums.push_back(200);
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(2);

    int result = longestConsecutive(nums);

    cout << "The length of the longest consecutive subsequence is: " << result <<endl;

    return 0;
}