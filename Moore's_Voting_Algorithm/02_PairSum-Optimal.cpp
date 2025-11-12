#include <iostream>
#include <vector>
using namespace std;

vector<int> PairSum(vector<int> nums, int target)
{
    int start = 0, end = nums.size() - 1;  // Two Pointer Apporach
    vector<int> ans;

    while (start < end)
    {
        int sum = nums[start] + nums[end];
        if (sum > target)
        {
            end--;
        }
        else if (sum < target)
        {
            start++;
        }
        else
        {
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
    }

    return ans;
}

int main()
{
    cout << "Welcome to the Pair Sum Problem!\n";
    vector<int> nums = {2, 7, 11, 15};

    cout << "Given Vector : ";
    for (int i : nums)
    {
        cout << i << " ";
    }
    cout << endl;

    int target = 13;
    vector<int> ans = PairSum(nums, target);
    cout << "nums[" << ans[0] << "] + nums[" << ans[1] << "] = " << target << endl;

    return 0;
}