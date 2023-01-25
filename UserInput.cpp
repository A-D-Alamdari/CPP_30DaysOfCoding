# include <iostream>
using namespace std;

// cout << (insertion operator)
// cin >> (extraction operation)

int main() {
    string name;
    int age;

    cout << "What is your name: ";
    cin >> name;

    cout << "What is your age: ";
    cin >> age;

    cout << "Hello " << name << endl;
    cout << "You are " << age << " years old." << endl;

    return 0;
}