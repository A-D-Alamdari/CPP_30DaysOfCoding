# include <iostream>
# include <vector>

// typedef std::vector<std::pair<std::string, int>> pairList_t;

// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

/*
    typedef:
        Reserved keyword used to create an additional name (alias) for another data type.
        New identifier for an existing type.
        Helps with readability and reduces typos.
*/

int main() {

    text_t firstName = "Amin";

    number_t age = 31;


    std::cout << firstName << std::endl;


    return 0;
}