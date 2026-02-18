#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Welcome to Peak Index In Mountain Array Problem!\n";
    vector<int> arr = {0, 10, 5, 2};

    cout << "Given Array : ";
    for (int i : arr)
        cout << i << " ";

    int peak = arr[0], peak_index = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > peak)
        {
            peak = arr[i];
            peak_index = i;
        }
    }

    cout << "\nPeak Index In Mountain Array is : " << peak_index << endl;
    return peak_index;
}