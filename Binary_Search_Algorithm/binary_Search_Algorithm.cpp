#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> nums, int target)
{
    int start = 0, end = nums.size() - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (nums[mid] > target)
        {
            end = mid - 1;
        }
        else if (nums[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    cout << "Welcome to Understanding Binary Search Algorithm!\n";

    vector<int> nums = {-1, 0, 3, 4, 5, 9, 12};
    int target;

    cout << "Enter which number you want to search : ";
    cin >> target;

    int result = binarySearch(nums, target);
    (result != -1) ? cout << target << " found at index " << result << ".\n" : cout << "Number not found.\n";

    return 0;
}