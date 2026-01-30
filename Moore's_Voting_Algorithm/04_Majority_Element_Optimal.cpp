#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Welcome to finding Majority Element using Sorting!\n";
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    cout << "\nGiven Numbers in Sorted Order : ";
    sort(nums.begin(), nums.end());

    for (int i : nums)
    {
        cout << i << " ";
    }

    int fre = 1, ans = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
        {
            fre++;
        }
        else
        {
            ans = nums[i];
            fre = 1;
        }
        if (fre > nums.size() / 2)
        {
            cout << "\nMajority Element is : " << ans << endl;
            return ans;
        }
    }

    cout << "No one Majority Element found!\n";
    return -1;
}