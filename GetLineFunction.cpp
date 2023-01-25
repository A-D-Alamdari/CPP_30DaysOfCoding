# include <iostream>
# include <string.h>

using namespace std;

int main() {
    string name;
    int age;

    cout << "What is your full name? ";
    getline(cin >> ws, name);

    cout << "What is your age: ";
    cin >> age;

    cout << "Hello " << name << '\n';
    cout << "You are " << age << " years old.";

    return 0;
}