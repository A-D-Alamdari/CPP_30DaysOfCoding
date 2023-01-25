# include <iostream>

// +, -, *, /, %

int main() {

    int students = 20;

    students += 1;
    students++;

    students = students + 3;

    students--;

    students *= 2;
    students /= 2;

    int remainder = students % 5;
    std::cout << students << std::endl;
    std::cout << remainder << std::endl;

    return 0;
}