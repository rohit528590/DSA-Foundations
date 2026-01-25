#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to the Container With Most Water Problem!\n";
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << "Given Height : ";
    for (int i : height)
    {
        cout << i << " ";
    }

    int left = 0, right = height.size() - 1, MaxWater = 0;
    while (left < right)
    {
        int lenght = min(height[left], height[right]);
        int breadth = right - left;

        int CurrWater = lenght * breadth;
        MaxWater = max(CurrWater, MaxWater);

        (height[left] > height[right]) ? right-- : left++;
    }

    cout << "\nThe max area of water the container can contain is : " << MaxWater << endl;
    return 0;
}