#include "HelperFunctions.h"

int generateRandomInteger(int min, int max) {
    std::random_device rd;  // Seed the random number generator
    std::mt19937 rng(rd()); // Initialize the Mersenne Twister random number generator

    std::uniform_int_distribution<int> distribution(min, max); // Define the distribution

    return distribution(rng); // Generate a random integer
}