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
    int decNum;

    cout << "Enter your number (Decimal Number) : ";
    cin >> decNum;
    
    cout << "Binary Form of " << decNum << " is : " << decToBinary(decNum) << endl;
    return 0;
}