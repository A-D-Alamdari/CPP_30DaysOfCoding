# include <iostream>
using namespace std;

/*
    Type Conversion:
        Conversion a value of one data type to another.
            Implicit = Automatic
            Explicit = Precede value with new data type. For example: (int) x
*/

int main() {

    double x = (int) 3.14;

    cout << x << endl;

    char y = 'X';

    int correct = 8;
    int questions = 10;
    double score = correct / (double) questions * 100;

    cout << score << endl;

    return 0;
}