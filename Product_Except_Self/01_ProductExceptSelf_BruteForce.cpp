#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Welcome to Product of Array Except Self Problem!\n";
    vector<int> nums = {1, 2, 3, 4};

    cout << "Given Numbers : ";
    for (int i : nums)
    {
        cout << i << " ";
    }

    int n = nums.size();
    vector<int> product(n, 1);

    cout << "\nProduct of Array Except Self is : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (nums[i] != nums[j])
            {
                product[i] *= nums[j];
            }
        }
        cout << product[i] << " ";
    }

    cout << endl;
    return 0;
}