/************************************************************
	Christian Jensen
	January 27th, 2019
	This program takes a file and replaces every instance
	of a string and replaces it with a different string.
************************************************************/

#include <iostream>
#include <string>
#include "proj1.h"

int main(int argc, char* argv[]){

	std::string start = argv[1];
	std::string end = argv[2];
	std::string whole;
	getline(std::cin, whole);
	exchange(whole, start, end);


	std::cout << whole;
	return 0;
}
