#include <iostream>
using namespace std;

int main()
{
    cout << "Welcome to the Printing SubArrays Program!\n";
    int size;

    cout << "Enter the Size of Array : ";
    cin >> size;

    int arr[size];
    cout << "Enter all " << size << " elements of Array -: ";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "All SubArrays of the Array are -:\n";
    for (int st = 0; st < size; st++)
    {
        for (int end = st; end < size; end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}