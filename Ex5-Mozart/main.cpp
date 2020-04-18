/********************************************************\
File Name: main.cpp
Author: Liri (18/4/2020)
Purpose: This contain functions that generate random vector,
		 and function that convert vector to string,
		 and function that make composition of them
\********************************************************/

#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include <random>

using namespace std;
using namespace std::placeholders;

const char FIRST_LETTER = 'a';
const int NUMBER_OF_LETTERS = 25;
const int ZERO = 0;

std::vector<char> generate_random_char_vector(size_t vector_size) {
	/**
	* @brief  generate random char vector in the given size
	* @param  IN size_t vector_size - the size of the chars vector
	*		  OUT std::vector<char> the random char vector in the given size
	* @return random char vector in the given size
	* @author Liri
	*/
	std::vector<char> random_char_vector;
	random_device rd; // non deterministic generator
	mt19937 gen(rd()); //to seed mersenne twister
	uniform_int_distribution<> dist(ZERO, NUMBER_OF_LETTERS); //distribute results 
															  //between 0 to NUMBER_OF_LETTERS inclusive
	for (size_t index = ZERO; index < vector_size; ++index)
	{
		random_char_vector.push_back(FIRST_LETTER + dist(gen));
	}
	return random_char_vector;
};

std::string char_vector_to_string(std::vector<char> vector_of_characters) {
	/**
	* @brief  get vector of chars and return the string that contains the
	*		  chars in the vector
	* @param  IN std::vector<char> vector_of_characters - vector containing characters
	*		  OUT std::string the string that contain the chars in the vector
	* @return string that contain the chars that in the vector
	* @author Liri
	*/
	std::string string;
	for (char character : vector_of_characters)
	{
		string.push_back(character);
	}
	return string;
};