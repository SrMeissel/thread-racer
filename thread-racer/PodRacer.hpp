#pragma once

#include <cstdlib>
#include <time.h> 
#include <string>

class PodRacer {
public:
	PodRacer(std::string name, int seed) : name(name) {
		//ensure speed > 0
		//casting objects memory location to int because all racers are created at practically the same time.
		std::srand((unsigned)time(NULL) + seed);
		speed = std::rand() % 10 + 1;
 	}

	void update() {
		position += speed;
	}

	int getPosition() const { return position; }
	std::string getName() { return name; }

private:
	int speed;
	int position = 0;
	std::string name;
};