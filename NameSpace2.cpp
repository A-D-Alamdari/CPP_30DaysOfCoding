# include <iostream>
using namespace std;

namespace First {
    void sayHello() {
        cout << "Hello First Namespace" << endl;
    }
}

namespace Second {
    void sayHello() {
        cout << "Hello second Namespace" << endl;
    }
}

using namespace First;
int main() {
    sayHello();
    return 0;
}