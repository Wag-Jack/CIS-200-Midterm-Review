#include <iostream>
using namespace std;

void swapValues(int* val1, int* val2) {
    int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

int main() {
    int x = 10; 
    int y = 20; 

    cout << "Before swap:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    swapValues(&x, &y);

    cout << "After swap:" << endl;
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}