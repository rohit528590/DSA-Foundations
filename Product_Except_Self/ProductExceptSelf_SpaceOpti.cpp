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
    vector<int> ans(n, 1);
    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }
    int sufix = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        sufix *= nums[i + 1];
        ans[i] *= sufix;
    }

    cout << "\nProduct of Array Except Self is : ";
    for (int i : ans)
    {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}