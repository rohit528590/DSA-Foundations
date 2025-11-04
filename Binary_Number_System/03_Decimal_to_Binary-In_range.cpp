#include <iostream>
using namespace std;

int decToBinary(int x)
{
    int BinaryNum = 0, placeValue = 1;
    while (x > 0)
    {
        int remainder = x % 2;
        BinaryNum += remainder * placeValue;
        placeValue *= 10;
        x /= 2;
    }
    return BinaryNum;
}

int main()
{
    cout<<"Welcome to Decimal to Binary Converter!\n";
    int start_num, end_num;

    cout << "Enter the Starting Number(Decimal Number) : ";
    cin >> start_num;
    
    cout << "Enter the Ending Number : ";
    cin >> end_num;
    
    // Error Handling
    if (start_num > end_num)
    {
        cout << "Enter Vaild Range!";
        return -1;
    }

    for (int i = start_num; i <= end_num; i++)
    {
        cout << "Binary Form of " << i << " is : " << decToBinary(i) << endl;
    }
    return 0;
}