#pragma once

#include <cstdlib>
#include <time.h> 
#include <string>

class PodRacer {
public:
	PodRacer(std::string name) : name(name) {
		//ensure speed > 0
		std::srand(time(0));
		speed = std::rand() % 10 + 1;
 	}

	void update() {
		position += speed;
	}

	int const getPosition() { return position; }
	std::string getName() { return name; }

private:
	int speed;
	int position = 0;
	std::string name;
};