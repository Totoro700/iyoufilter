#include <iostream>

std::string iyou(string msg){
	return "i " + msg.erase(std::remove_if(msg.begin(), msg.end(), std::isspace), msg.end()).std::tolower() + " you";
} // maybe will work idk too lazy