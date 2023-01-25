# include <iostream>
using namespace std;

int main() {
    /*
    The "const" keyword specifies that a variable's value is constant.
    Tells the compiler to prevent anything from modifying it.
    */
    const double PI = 3.14159;
    const int LIGHT_SPEED = 299792458;
    
    double radius = 10;

    double circumference = 2 * PI * radius;

    cout << circumference << "cm" << endl;

    return 0;
}