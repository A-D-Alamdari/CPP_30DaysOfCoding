# include <iostream>

using namespace std;

/*
    Syntex of Ternary Operator (?:):

        variable = (condition) ? expressionTrue : expressionFalse;

        If condition is TRUE, do expressionTrue, and If condition is FALSE, do expressionFalse.
*/

int main() {
    int time = 17;

// With If-Else Statement
    // if (time < 18) {
    //     cout << "Good Day.";
    // } else {
    //     cout << "Good Evening.";
    // }

// With Ternary Operator (Short Hand If-Else)
    string result = (time < 18) ? "Good Day." : "Good Evening.";
    cout << result;

    // (time < 18) ? cout << "Good Day." : cout <<"Good Evening.";

    return 0;
}