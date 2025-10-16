#include<iostream>
using namespace std;


float convertToDecimal(int num, int den) {
    if (den == 0) {
        throw string("no zeroes");
    }

    if (num < 0 || den < 0) {
        throw string("plz no negative numbers");
    }

    return float(num) / den;
}


int main() {
    int numerator = -3;
    int denominator = 4;
    float result;

    try {
        result = convertToDecimal(numerator, denominator);
    } catch (string error) {
        cout << error << endl;
        return -1;
    } catch (...) {
        cout << "An unexpected error has occurred." << endl;
        return -2;
    }

    cout << result << endl;
    return 0;
}
