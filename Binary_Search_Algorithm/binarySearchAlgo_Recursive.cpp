#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> nums, int start, int end, int target)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] > target)
        {
            return binarySearch(nums, start, mid - 1, target);
        }
        else if (nums[mid] < target)
        {
            return binarySearch(nums, mid + 1, end, target);
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
    cout << "Welcome in Implementation of Binary Search Algorithm in Recurive Funcation!\n";
    vector<int> nums = {-1, 0, 3, 5, 9, 12};

    int start = 0, end = nums.size() - 1, target;

    cout << "Enter which number you want to search : ";
    cin >> target;

    int result = binarySearch(nums, start, end, target);
    (result != -1) ? cout << target << " found at index " << result << ".\n" : cout << "Number not found.\n";

    return 0;
}