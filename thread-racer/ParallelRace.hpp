#pragma once

#include <thread>

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
class ParallelRace {

};