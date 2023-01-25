# include <iostream>
using namespace std;
/*
    NameSpace:
        Provides a solution for preventing name conflicts in large projects.
        Each entity needs a unique name.
        A namespace allos for identically named entities as long as the namespace are different.
*/

namespace First {
    int x = 1;
}
namespace Second {
    int x = 2;
}

int main() {

    int x = 0;

    cout << First::x << endl;

    return 0;
}