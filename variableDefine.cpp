# include <iostream>
using namespace std;

int main() {
    int x; // Declaration
    x = 5; // Assignment

    int y = 15;

    int sum = x + y;

    cout << x << endl;
    cout << y << endl << sum << endl;

    // int -> Whole Number
    int age = 31;
    int year = 2023;

    // double -> number including decimal
    double price = 2.99;
    double gpa = 3.7;

    cout << "Price is: " << price << endl;

    // char -> Single character
    char grade = 'A';
    char genfer = 'F';

    cout << "The grade is: " << grade << endl;

    // boolean -> true or false
    bool isStudent = true;
    bool isEmpty = false;
    
    cout << isStudent << endl;

    // String -> Sequence of characters
    string name = "Amin";
    string day = "Friday";

    cout << "Hello, my name is " << name << ". My age is " << age << endl;

    return 0;
}