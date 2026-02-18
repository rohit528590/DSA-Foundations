class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int peak = arr[0], peak_index = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > peak)
            {
                peak = arr[i];
                peak_index = i;
            }
        }
        return peak_index;
    }
};