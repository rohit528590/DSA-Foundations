#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Welcome to Search in Rotated Sorted Array Problem!\n";
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};

    cout << "Given Numbers : ";
    for (int i : nums)
        cout << i << " ";

    int target;
    cout << "\nEnter target number : ";
    cin >> target;

    int start = 0, end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
        {
            cout << target << " found at index " << mid << endl;
            return mid;
        }

        else if (nums[start] <= nums[mid])
        {
            if (nums[start] <= target && nums[mid] > target)
                end = mid - 1;
            else
                start = mid + 1;
        }

        else
        {
            if (nums[mid] < target && nums[end] >= target)
                start = mid + 1;
            else
                end = mid - 1;
        }
    }

    cout << "Element not found!\n";
    return -1;
}