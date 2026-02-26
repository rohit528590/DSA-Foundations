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
            start++, end--;
            while (start <= end)
            {
                int mid = start + (end - start) / 2;

                if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
                    return nums[mid];

                else if (mid % 2 == 0)
                {
                    if (nums[mid] == nums[mid - 1])
                        end = mid - 1;
                    else
                        start = mid + 1;
                }
                else
                {
                    if (nums[mid] == nums[mid - 1])
                        start = mid + 1;
                    else
                        end = mid - 1;
                }
            }
        }
        return -1;
    }
};