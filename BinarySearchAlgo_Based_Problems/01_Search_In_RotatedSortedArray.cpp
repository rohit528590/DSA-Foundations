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

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            cout << target << " found at index " << i << endl;
            return i;
        }
    }

    cout << "Element not found!\n";
    return -1;
}