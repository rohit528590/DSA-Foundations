class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int left = 0, right = height.size() - 1, MaxWater = 0;
        while (left < right)
        {
            int breadth = right - left;
            int length = min(height[right], height[left]);

            int CurrWater = length * breadth;
            MaxWater = max(CurrWater, MaxWater);

            (height[right]) > (height[left]) ? left++ : right--;
        }
        
        return MaxWater;
    }
};