class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int start = 0, end = nums.size() - 1;
        if (start == end)
            return nums[start];

        else if (nums[start] != nums[start + 1])
            return nums[start];

        else if (nums[end] != nums[end - 1])
            return nums[end];

        else
        {
            for (int i = 1; i < nums.size() - 1; i++)
            {
                if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1])
                {
                    return nums[i];
                }
            }
        }
        return -1;
    }
};