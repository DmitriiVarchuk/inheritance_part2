#include <iostream>
#include <string>
using namespace std;

class Circle {
private:
    float radius;
    float diameter;

public:
    Circle(float r = 2) : radius(r), diameter(2 * r) {}

    float getRadius() const { return radius; }
    float getDiameter() const { return diameter; }
};

class Square {
private:
    float side;

public:
    Square(float s = 4) : side(s) {}

    float getSide() const { return side; }
};

class CircleInSquare : public Circle, public Square {
public:
    CircleInSquare(float r = 1, float s = 4) : Circle(r), Square(s) {}

    string isCorrect() const {
        if (getDiameter() < getSide()) {
            return "Correct but partial";
        }
        else if (getDiameter() == getSide()) {
            return "Correct";
        }
        else {
            return "Incorrect";
        }
    }
};

int main() {
    CircleInSquare cis1(2, 4); 
    CircleInSquare cis2(2, 2); 
    CircleInSquare cis3(3, 4); 

    cout << cis1.isCorrect() << endl;
    cout << cis2.isCorrect() << endl;
    cout << cis3.isCorrect() << endl;

    return 0;
}
