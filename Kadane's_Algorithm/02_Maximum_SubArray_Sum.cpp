#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to the Maximum SubArray Sum Program!\n";
    int size;

    cout << "Enter the Size of Array : ";
    cin >> size;

    int arr[size];
    cout << "Enter all " << size << " elements of Array -: ";
    
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int maxSum = INT_MIN;
    for (int st = 0; st < size; st++)
    {
        int CurrSum = 0;
        for (int end = st; end < size; end++)
        {
            CurrSum += arr[end];
            maxSum = max(CurrSum, maxSum);
        }
    }

    cout << "Max SubArray Sum is : " << maxSum << endl;
    return 0;
}