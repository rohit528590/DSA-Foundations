#include <iostream>
#include <vector>
using namespace std;

vector<int> PairSum(vector<int> nums, int target)
{
    int n = nums.size();
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
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
    cout<<"Given Target : "<<target<<endl;
    
    vector<int> ans = PairSum(nums, target);
    cout << "nums[" << ans[0] << "] + nums[" << ans[1] << "] = " << target << endl;

    return 0;
}