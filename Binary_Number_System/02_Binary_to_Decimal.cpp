#include <iostream>
using namespace std;

int binToDecimal(int x)
{
    int Decimal = 0, placeValue = 1;
    while (x > 0)
    {
        int remainder = x % 10;
        Decimal += remainder * placeValue;
        placeValue *= 2;
        x /= 10;
    }
    return Decimal;
}

int main()
{
    cout<<"Welcome to Binary to Decimal Converter!\n";
    int binNum;

    cout << "Enter the Binary Number : ";
    cin >> binNum;

    cout << "Decimal Form of " << binNum << "(Binary Number) is : " << binToDecimal(binNum) << endl;
    return 0;
}