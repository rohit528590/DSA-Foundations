#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to the Kadane's Algorithm Program!\n";
    int size;

    cout << "Enter the Size of Array : ";
    cin >> size;

    int arr[size];
    cout << "Enter all " << size << " elements of Array : ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int currSum = 0, maxSum = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
        {
            currSum = 0;
        }
    }

    cout << "Max SubArray Sum is : " << maxSum << endl;
    return 0;
}