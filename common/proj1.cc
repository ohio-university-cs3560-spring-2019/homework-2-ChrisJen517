/*************************************
	Christian Jensen
	January 27th, 2018
	This file is the implementation
	file for the exchange function
	.
	.
	The exchange functions searches
	for a given string(m) within a 
	given sentence and replaces
	all occurences of m.
*************************************/
#include <iostream>
#include <string>
#include "proj1.h"

void exchange(std::string& s, std::string m, std::string k){
	std::string temp = k;
	for(int i = 0; i < s.size() - m.size(); i++){
		if(s.substr(i, m.size()) == m){
			s.replace(i, m.size(), k);
		}
	}
}
