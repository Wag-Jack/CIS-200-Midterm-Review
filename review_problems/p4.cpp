#include<iostream>
using namespace std;

int factorial(int n) {

    if (n == 1) {
        return 1;
    }
   
    return n * factorial(n-1);
}

int main() {
    int x = 5;

    cout << factorial(x) << endl;

    return 0;
}