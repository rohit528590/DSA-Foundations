#include <iostream>
using namespace std;
/*
Bitwise AND(&) -:
0 & 0 = 0
0 & 1 = 0
1 & 0 = 0
1 & 1 = 1

Bitwise OR(|) -:
0 | 0 = 0
0 | 1 = 1
1 | 0 = 1
1 | 1 = 1

Bitwise XOR(^) -:
0 ^ 0 = 0
0 ^ 1 = 1
1 ^ 0 = 1
1 ^ 1 = 0

Bitwise NOT(~) -:
~0 = 1
~1 = 0
In short:
(~a) = -(a + 1)

Bitwise Left Shift(<<) -:
(a << b) = a * 2 raise to the power b
(a << b) = a * (2^b)

Bitwise Right Shift(>>) -:
(a >> b) = a / 2 raise to the power b
(a >> b) = a / (2^b)
*/
int main()
{
    cout << "Welcome to the Bitwise Operations Program!\n";
    int a, b;

    cout << "Enter the First Number : ";
    cin >> a;

    cout << "Enter the Second Number : ";
    cin >> b;

    cout << "Bitwise AND(&) of " << a << " and " << b << " is : " << (a & b) << endl;
    cout << "Bitwise OR(|) of " << a << " and " << b << " is : " << (a | b) << endl;
    cout << "Bitwise XOR(^) of " << a << " and " << b << " is : " << (a ^ b) << endl;

    cout << "Bitwise NOT(~) of " << a << " is : " << (~a) << endl;
    cout << "Bitwise NOT(~) of " << b << " is : " << (~b) << endl;

    cout << "Bitwise Left Shift(<<) of " << a << " and " << b << " is : " << (a << b) << endl;
    cout << "Bitwise Right Shift(>>) of " << a << " and " << b << " is : " << (a >> b) << endl;
    return 0;
}