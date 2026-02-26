#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Welcome to Optimal Single Element in a Sorted Array Problem!\n";
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
        start++, end--;
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1])
            {
                cout << "\nSingle Element in a Sorted Array is : " << nums[mid] << endl;
                return nums[mid];
            }
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

    cout << "\nNo Single Element in a Sorted Array!\n";
    return -1;
}