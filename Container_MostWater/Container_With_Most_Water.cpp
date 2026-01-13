#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to the Container With Most Water Problem!\n";
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << "Given Heights : ";
    for (int i : height)
    {
        cout << i << " ";
    }

    int MaxWater = 0;
    for (int i = 0; i < height.size() - 1; i++)
    {
        for (int j = i + 1; j < height.size(); j++)
        {
            int breadth = j - i;
            int length = min(height[i], height[j]);
            int CurrWater = breadth * length;
            MaxWater = max(CurrWater, MaxWater);
        }
    }

    cout << "\nThe max area of water the container can contain is : " << MaxWater << endl;
    return 0;
}