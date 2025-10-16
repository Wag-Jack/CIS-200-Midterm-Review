#include<iostream>
using namespace std;

class Rectangle {
    private:
        int length;
        int width;

    public:
        Rectangle(int l = 0, int w = 0) {
            length = l;
            width = w;
        }

        Rectangle(const Rectangle& other) {
            length = other.length;
            width = other.width;
        }

        ~Rectangle() {
            cout << "Deleting rectnagle of (length, width) = (" << length << "," << width << ").\n"; 
        }

        int area() {
            return length * width;
        }

        void display() {
            cout << "Length: " << length << ", Width: " << width << ", Area: " << area() << endl;;
        }

};

int main() {
    Rectangle rect1(3, 4);
    Rectangle rect2(6, 7);
    
    rect1.display();
    rect2.display();

    return 0;
}