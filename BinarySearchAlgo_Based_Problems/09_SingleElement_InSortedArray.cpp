#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Welcome to Single Element in a Sorted Array Problem!\n";
    vector<int> nums = {3, 3, 7, 7, 10, 11, 11};

    cout << "Given Array : ";
    for (int i : nums)
        cout << i << " ";

    int start = 0, end = nums.size() - 1;
    if (start == end)
    {
        cout << "\nOnly one element found in given array : " << nums[start] << endl;
        return nums[start];
    }
    else if (nums[start] != nums[start + 1])
    {
        cout << "\nSingle Element in a Sorted Array is : " << nums[start] << endl;
        return nums[start];
    }
    else if (nums[end] != nums[end - 1])
    {
        cout << "\nSingle Element in a Sorted Array is : " << nums[end] << endl;
        return nums[end];
    }
    else
    {
        for (int i = 1; i < end; i++)
        {
            if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1])
            {
                cout << "\nSingle Element in a Sorted Array is : " << nums[i] << endl;
                return nums[i];
            }
        }
    }

    cout << "\nNo Single Element in a Sorted Array!\n";
    return -1;
}