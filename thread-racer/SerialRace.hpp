#pragma once

#include <iostream>
#include <vector>

#include "PodRacer.hpp"

struct SerialRace {
	SerialRace(int length) {
		//create racers
		std::vector<PodRacer> podRacers;
		podRacers.push_back(PodRacer("anakin", 1));
		podRacers.push_back(PodRacer("Sebulba", 2));
		podRacers.push_back(PodRacer("clegg", 3));

		//LET THE RACE BEGIN!
		bool finished = false;
		while (!finished) {
			for (int i = 0; i < podRacers.size(); i++) {
				podRacers[i].update();
				std::cout << podRacers[i].getName() << " is at: " << podRacers[i].getPosition() << "\n";
				if (podRacers[i].getPosition() >= length) {
					finished = true;
					std::cout << "race finished \n";
					break;
				}
			}
			std::cout << "========================== \n";
		}
	}
};