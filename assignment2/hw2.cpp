#include <iostream>
#include <cmath>
using namespace std;

int main()
{ 
    float exponent, result;

    cout << "Enter exponent, N, for expression 2^N: ";
    cin >> exponent;

    result = pow(2.0, exponent);

    cout << result;
    return 0;
}