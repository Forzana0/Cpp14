#include <iostream>
using namespace std;

//struct Complex {
//    double real;
//    double imag;
//    Complex() : real(0), imag(0) {}
//    Complex(double r, double i) : real(r), imag(i) {}
//};
//
//Complex add(const Complex& a, const Complex& b) {
//    return Complex(a.real + b.real, a.imag + b.imag);
//}
//
//Complex subtract(const Complex& a, const Complex& b) {
//    return Complex(a.real - b.real, a.imag - b.imag);
//}
//
//Complex multiply(const Complex& a, const Complex& b) {
//    return Complex(a.real * b.real - a.imag * b.imag, a.real * b.imag + a.imag * b.real);
//}
//
//Complex divide(const Complex& a, const Complex& b) {
//    double denominator = b.real * b.real + b.imag * b.imag;
//    return Complex((a.real * b.real + a.imag * b.imag) / denominator,
//        (a.imag * b.real - a.real * b.imag) / denominator);
//}
//
//void display(const Complex& c) {
//    cout << c.real;
//    if (c.imag >= 0) cout << " + " << c.imag << "i" << endl;
//    else cout << " - " << -c.imag << "i" << endl;
//}
//
//int main() {
//    Complex num1(3.0, 4.0);
//    Complex num2(1.0, 2.0);
//
//    Complex sum = add(num1, num2);
//    Complex difference = subtract(num1, num2);
//    Complex product = multiply(num1, num2);
//    Complex quotient = divide(num1, num2);
//
//    cout << "Number 1: "; display(num1);
//    cout << "Number 2: "; display(num2);
//
//    cout << "Sum: "; display(sum);
//    cout << "Difference: "; display(difference);
//    cout << "Product: "; display(product);
//    cout << "Quotient: "; display(quotient);
//}

/////task2

//struct Car {
//    double length;
//    double clearance;
//    double engineVolume;
//    double enginePower;
//    double wheelDiameter;
//    string color;
//    string transmissionType;
//
//    void setValues(double len, double clr, double engVol, double engPow, double whlDia, string colr, string transType) {
//        length = len;
//        clearance = clr;
//        engineVolume = engVol;
//        enginePower = engPow;
//        wheelDiameter = whlDia;
//        color = colr;
//        transmissionType = transType;
//    }
//
//    void display() const {
//        cout << "Length: " << length << " meters" << endl;
//        cout << "Clearance: " << clearance << " meters" << endl;
//        cout << "Engine Volume: " << engineVolume << " liters" << endl;
//        cout << "Engine Power: " << enginePower << " hp" << endl;
//        cout << "Wheel Diameter: " << wheelDiameter << " inches" << endl;
//        cout << "Color: " << color << endl;
//        cout << "Transmission Type: " << transmissionType << endl;
//    }
//
//    bool search(double len, double clr, double engVol, double engPow, double whlDia, string colr, string transType) const {
//        return (length == len && clearance == clr && engineVolume == engVol &&
//            enginePower == engPow && wheelDiameter == whlDia && color == colr &&
//            transmissionType == transType);
//    }
//};
//
//int main() {
//    Car myCar;
//
//    myCar.setValues(4.5, 0.2, 2.0, 250, 18, "Red", "Automatic");
//    myCar.display();
//
//    if (myCar.search(4.5, 0.2, 2.0, 250, 18, "Red", "Automatic")) {
//        cout << "Car found!" << endl;
//    }
//    else {
//        cout << "Car not found." << endl;
//    }
//}