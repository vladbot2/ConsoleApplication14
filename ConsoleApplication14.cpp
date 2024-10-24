#include <iostream>
#include <string>
using namespace std;

//1
//struct Complex {
//    int real;
//
//    void set(int r) {
//        real = r;
//    }
//
//    Complex operator+(Complex other) {
//        return { real + other.real };
//    }
//
//    Complex operator-(Complex other) {
//        return { real - other.real };
//    }
//
//    Complex operator*(Complex other) {
//        return { real * other.real };
//    }
//
//    Complex operator/(Complex other) {
//        return { real / other.real };
//    }
//
//    void display() {
//        cout << real << endl;
//    }
//};
//
//int main() {
//    Complex a, b;
//    a.set(3);
//    b.set(1);
//
//    Complex sum = a + b;
//    Complex difference = a - b;
//    Complex product = a * b;
//    Complex quotient = a / b;
//
//    sum.display();
//    difference.display();
//    product.display();
//    quotient.display();
//}
// 
//2
//struct Car {
//    int length; 
//    int clearance; 
//    int engineVolume; 
//    int enginePower; 
//    int wheelDiameter; 
//    string color;
//
//    void setValues(int l, int c, int ev, int ep, int wd, const string& col) {
//        length = l;
//        clearance = c;
//        engineVolume = ev;
//        enginePower = ep;
//        wheelDiameter = wd;
//        color = col;
//    }
//
//    void displayValues() const {
//        cout << "Length: " << length << " cm" << endl;
//        cout << "Clearance: " << clearance << " cm" << endl;
//        cout << "Engine Volume: " << engineVolume << " cc" << endl;
//        cout << "Engine Power: " << enginePower << " HP" << endl;
//        cout << "Wheel Diameter: " << wheelDiameter << " inches" << endl;
//        cout << "Color: " << color << endl;
//    }
//
//    bool findByColor(const string& searchColor) const {
//        return color == searchColor;
//    }
//};

int main() {
    Car myCar;
    myCar.setValues(450, 15, 2000, 150, 17, "Red");

    myCar.displayValues();

    string searchColor;
    cout << "Enter color to search: ";
    cin >> searchColor;

    if (myCar.findByColor(searchColor)) {
        cout << "Car with color " << searchColor << " found." << endl;
    }
    else {
        cout << "Car with color " << searchColor << " not found." << endl;
    }
}
