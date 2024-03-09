#pragma once

#include <thread>
#include <atomic>
#include <string>
#include <chrono>
#include <iostream>

// https://www.geeksforgeeks.org/multithreading-in-cpp/ <= limited
// https://www.educative.io/blog/modern-multithreading-and-concurrency-in-cpp <= not very helpful, many grammar errors.
// https://www.youtube.com/watch?v=-Qa1RqmXKG0 <= mutex? mutex.
// https://www.geeksforgeeks.org/std-mutex-in-cpp/ <= limited
// https://cplusplus.com/reference/thread/thread/ <= whats join, detach, swap?
// join: wait for the slow bastard.
// detach: let it drift away.
// swap: why?
// https://stackoverflow.com/questions/4437527/why-do-we-use-the-volatile-keyword/4437555#4437555 <= volitile tag is just for compiler :(
// https://stackoverflow.com/questions/31978324/what-exactly-is-stdatomic 
// https://en.cppreference.com/w/cpp/atomic/atomic <= atomic is cool. makes something know it will be used in multiple threads and gives functionality to help :)
// store
// load
// exchange
// wait
// thats cool!
struct ParallelRace {
	ParallelRace(int length) {
		std::atomic<bool> finished;

		std::thread racer(ThreadRacer, 5, length, "anakin", finished);

		racer.join();
	}

	void ThreadRacer(int speed, int length, std::string name, std::atomic<bool>& finished) {
		int position = 0;
		// only runs as long as no racers have finished
		while (!finished) {
			std::this_thread::sleep_for(std::chrono::milliseconds(1 / speed));
			position += 1;
			if (position >= length) {
				finished.store(true); //report to the main thread that this reacer has finished
				std::cout << name << " has finished the race! \n";
			}
		}
	}
};

//struct ThreadRacer {
//	// the idea here is that the racer is just going off doing his racer things until finished is flipped.
//	ThreadRacer(int speed, int length, std::string name, std::atomic<bool>* finished) {
//		int position = 0;
//		// only runs as long as no racers have finished
//		while (!finished) {
//			std::this_thread::sleep_for(std::chrono::milliseconds(1/speed));
//			position += 1;
//			if (position >= length) {
//				finished->store(true); //report to the main thread that this reacer has finished
//				std::cout << name << " has finished the race! \n";
//			}
//		}
//	}
//};