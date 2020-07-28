class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> output;
        
        sort(nums.begin(), nums.end());
        int vector_length = nums.size();
        int j,k;
        int flag = 0;
        
        for (int i=0;i< vector_length-2; i++)
        {
            j = i+1;
            k = vector_length-1;
            if (i>0 && nums[i] == nums[i-1])
                continue;
            while(k>j)
            {
                if (k < vector_length -1 && nums[k] == nums[k+1])
                {
                    k--;
                    continue;
                }
                
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    vector<int> out;
                    out.push_back(nums[i]);
                    out.push_back(nums[j]);
                    out.push_back(nums[k]);
                    output.push_back(out);
                    k--;
                }
                
                if (nums[i] + nums[j] + nums[k] > 0)
                    k--;    
                
                if (nums[i] + nums[j] + nums[k] < 0)
                    j++;
            }
        }
        
        return output;
    }
};
