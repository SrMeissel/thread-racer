// thread-racer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

#include "PodRacer.hpp"

int main()
{
	int length = 100;

	//create racers
	std::vector<PodRacer> podRacers;
	podRacers.push_back(PodRacer("anakin"));

	bool finished = false;
	while (!finished) {
		for (int i = 0; i < podRacers.size(); i++) {
			podRacers[i].update();
			std::cout << podRacers[i].getName() << " is at: " << podRacers[i].getPosition() << "\n";
			if (podRacers[i].getPosition() >= length) {
				finished = true;
				std::cout << "race finished \n";
			}
		}
	}
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
