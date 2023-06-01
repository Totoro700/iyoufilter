#pragma once
#include <iostream>
#include <string>

namespace retard {
    void iyou(std::string input) {
        std::string result;
        for (char c : input) {
            if (c != ' ') {
                result += c;
            }
        }
        std::cout << "i " << result << " you";
    }
}