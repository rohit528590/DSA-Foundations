#include <iostream>
#include <vector>
using namespace std;

int majority(vector<int> nums)
{
    int n = nums.size();
    for (int i : nums)
    {
        int freq = 1;
        for (int j : nums)
        {
            if (i == j)
            {
                freq++;
            }
        }
        if (freq > n / 2)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    cout << "Welcome to the Majority Element Problem!\n";
    vector<int> nums = {1, 2, 2, 1, 1};

    cout << "Given Vector : ";
    for (int i : nums)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Majority Element in given Vector is : " << majority(nums) << endl;
    return 0;
}