#include<iostream>
using namespace std;

int main() {
    int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int* ptrArray; //4 bytes

    ptrArray = &array[0];

    cout << *ptrArray << endl;
    // 10
    cout << *++ptrArray << endl; //advance pointer, dereference, print
    // 20
    cout << ++*ptrArray << endl; //dereference, increase value, print
    // 21
    cout << ++(*ptrArray) << endl; //same as ++*ptrArray
    // 22
    cout << *(++ptrArray) << endl; //same as *++ptrArray
    // 30
    cout << *ptrArray++ << endl; //dereference to print, advance pointer, print
    // 30
    cout << *(ptrArray)++ << endl; //same as *ptrArray++
    // 40
    cout << *(ptrArray++) << endl; //same as *ptrArray++
    // 50
    cout << (*ptrArray)++ << endl; //dereference to print, increase value, print
    // 60
    return 0;
}