#include "funcs.h"
#include <iostream>


// Sample function

std::string greet(std::string name){
  return "Hello "+name+"!";
}

std::string remove_leading_spaces(string line){
	int count = line.length;
	string new_string ="";
	for (int i = 0; i < count; ++i)
	{
		if (line[i] != ' ')
		{
			new_string = new_string + line[i];/* code */
		}
	}
	return new_string;
}

// Write all your functions in here

