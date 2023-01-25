# include <iostream>
# include <cmath>

using namespace std;

int main() {
    double a;
    double b;
    double c;

    cout << "Enter the leg value (a): ";
    cin >> a;

    cout << "Enter the leg value (b): ";
    cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);

    cout << "The Hyptenuse value is: " << c << endl;

    return 0;
}