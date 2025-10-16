#include<iostream>
using namespace std;

class Rectangle {
    protected:
        int length;
        int width;

    public:
        Rectangle(int l, int w) {
            length = l;
            width = w;
        }

        Rectangle(const Rectangle& other) {
            length = other.length;
            width = other.width;
        }

        ~Rectangle() {
            cout << "Deleting rectangle of (length, width) = (" << length << "," << width << ").\n"; 
        }

        int area() {
            return length * width;
        }

        void display() {
            cout << "Length: " << length << ", Width: " << width << ", Area: " << area() << endl;;
        }
};

class Box : public Rectangle {
    private: 
        int height;

    public:
        Box(int l, int w, int h) : Rectangle(l, w), height(h) {}

        Box(const Box& other) : Rectangle(other), height(other.height) {}

        ~Box() {
            cout << "Deleting box of (length, width, height) = " << "(" << length << "," << width << "," << height << ")\n";
        }

        int volume() {
            return area() * height;
        }

        void display() {
            cout << "Length: " << length << ", Width: " << width << ", Height: " << height << ", Volume: " << volume() << endl;
        }
};

int main() {
    Rectangle rect1(3, 4);
    Rectangle rect2(6, 7);
    Rectangle rect3(rect2);

    Box box1(3, 4, 5);
    Box box2(box1);

    rect1.display();
    rect2.display();
    rect3.display();

    box1.display();
    box2.display();

    return 0;
}