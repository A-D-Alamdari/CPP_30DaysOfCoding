# include <iostream>
using namespace std;

/*
    NameSpace:
        Provides a solution for preventing name conflicts in large projects.
        Each entity needs a unique name.
        A namespace allos for identically named entities as long as the namespace are different.
*/
namespace First {
    void sayHello() {
        cout << "Hello First NameSpace" << endl;
    }
}

namespace Second {
    void sayHello() {
        cout << "Hello Second NameSpace" << endl;
    }
}

int main() {
    First::sayHello();
    Second::sayHello();

    return 0;
}