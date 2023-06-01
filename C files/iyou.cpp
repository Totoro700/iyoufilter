#include "iyou-cpp.h"
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    std::string str;
    if (argc == 2) {
        str = std::string(argv[1]);
    } else {
        std::getline(std::cin, str);
    }
    retard::iyou(str);
    return 0;
}