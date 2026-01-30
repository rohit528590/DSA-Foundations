class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int freq = 0, ans = 0;

        // Moores's Voting Algorithm
        for (int i = 0; i < nums.size(); i++)
        {
            if (freq == 0)
                ans = nums[i];

            if (ans == nums[i])
                freq++;

            else
                freq--;
        }

        // Required only when a majority element is NOT guaranteed to exist
        freq = 0;
        for (int i : nums)
        {
            if (ans == i)
                freq++;

            if (freq > nums.size() / 2)
                return ans;
        }

        // No majority element found
        return -1;
    }
};