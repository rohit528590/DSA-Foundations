#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Welcome to Product of Array Except Self Problem!\n";
    vector<int> nums = {1, 2, 3, 4};

    cout << "Given Number : ";
    for (int i : nums)
    {
        cout << i << " ";
    }

    int n = nums.size();
    vector<int> ans(n, 1);

    vector<int> prefix(n, 1);
    vector<int> sufix(n, 1);

    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        sufix[i] = sufix[i + 1] * nums[i + 1];
    }

    cout << "\nProduct of Array Except Self is : ";
    for (int i = 0; i < n; i++)
    {
        ans[i] = prefix[i] * sufix[i];
        cout << ans[i] << " ";
    }

    cout << endl;
    return 0;
}