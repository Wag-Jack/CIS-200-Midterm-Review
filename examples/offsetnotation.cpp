#include<iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int myArray[SIZE] = {1,2,3,4,5};
    int* arrayPtr = myArray;

    cout << "Array notation\n";
    //array notation
    for (int i = 0; i < SIZE; ++i) {
        cout << myArray[i];
    }

    cout << "\nArray offset notation\n";
    //aray offset notation
    for (int i = 0; i < SIZE; ++i)
        cout << *(myArray + i);

    cout << "\nPointer offset notation\n";
    //pointer offset notation
    for (int i = 0; i < SIZE; i++)
        cout << *(arrayPtr + i);

    cout << "\nPointer notation\n";
    //pointer notation
    for (int i = 0; i < SIZE; ++i) {
        cout << *arrayPtr++;
    }
}