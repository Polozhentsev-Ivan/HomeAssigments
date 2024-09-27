/* Polozhentsev Ivan iv.poloz.wdesd@mail.ru
first homework project
*/
#include <iostream>
#include "Hello.hpp"
#include <string>

int hello()
{
	std::string name;
	int k = 0;
	std::cout << "Hello World!" << std::endl;
	while (k != 1) {
		
		std::cout << "Enter the name: " << std::endl;
		getline(std::cin , name);
		if (name == "stop" or name == "exit"){
			break;
		}
		std::cout << "Hello " << name << "!" << std::endl; 
	}
}
