class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int temp=0;
        while(temp<=high){
            if(nums[temp]==0)
            {
                swap(nums[temp],nums[low]);
                low++;
                temp++;
            }
            else if(nums[temp]==2)
            {
                swap(nums[temp],nums[high]);
                high--;
              
            }
            else{
                temp++;
            }
        }

    }
};