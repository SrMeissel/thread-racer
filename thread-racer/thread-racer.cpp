// thread-racer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

#include "SerialRace.hpp"

int main()
{
	while (true) {
		std::cout << "you want a serial race, or a parralel race? \n (S/P): ";
		std::string reply;
		std::cin >> reply;

		if (reply == "S") {
			SerialRace podRace(100);
		}
		else {
			std::cout << "what? \n";
		}
	}
}