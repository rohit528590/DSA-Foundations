#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Welcome to Optimal Peak Index in Mountain Array Problem!\n";
    vector<int> arr = {3, 5, 3, 2, 0};

    cout << "Given Array : ";
    for (int i : arr)
        cout << i << " ";

    // We avoid first and last index because peak cannot be at index 0 or n-1 in a valid mountain array.
    int start = 1, end = arr.size() - 2;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        // Case 1: mid is the peak
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            cout << "\nPeak Index of mountain array is : " << mid << endl;
            return mid;
        }

        // Case 2: We are on the increasing slope so peak must be on the right
        else if (arr[mid - 1] < arr[mid])
            start = mid + 1;

        // Case 3: We are on the decreasing slope So peak must be on the left.
        else
            end = mid - 1;
    }
    cout << "\nUnvalid Mountain Array!\n";
    return -1;
}