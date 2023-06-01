#include <iostream>

std::string iyou(string msg){
	return msg.erase(std::remove_if(msg.begin(), msg.end(), std::isspace), msg.end()).std::tolower();
} // maybe will work idk too lazy