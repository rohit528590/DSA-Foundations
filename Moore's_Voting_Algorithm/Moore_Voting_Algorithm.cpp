#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Welcome to Understanding Moore's Voting Algorithm!\n";
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    cout << "Given Elements : ";
    for (int i : nums)
    {
        cout << i << " ";
    }

    // Moore's Voting Algorithm
    int freq = 0, ans = 0;
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
        if (i == ans)
            freq++;

        if (freq > nums.size() / 2)
        {
            cout << "\nMajority Element is : " << ans << endl;
            return ans;
        }
    }

    cout << "\nNo one Majority Element found!\n";
    return -1;
}