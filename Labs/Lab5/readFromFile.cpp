/*
By:			Sean Teramae
Login:		teramae8
Section:	1
*/
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <vector>
#include <fstream>
#include "curved.h"
using namespace std;
vector<string> split(string input);

int main() {
	string data;
	fstream file("oneStudent.txt");
	vector<string> tokenized;
	vector<float> grades;

	// Check if the file is open and read in data
	if (file.is_open()) {
		getline(file, data);
	}

	// Tokenize the data
	tokenized = split(data);
	for (int i = 0; i < tokenized.size(); ++i) {
		grades.push_back(stoi(tokenized[i]));
		cout << tokenized[i] << endl;
	}
	
	// Calculate and print the result
	float avg, std;
	avg = average(grades);
	std = standardDeviation(grades, avg);
	printGrades(grades, avg, std);
	
	cout << endl;
	return 0;
}

vector<string> split(string input) {
	std::istringstream ss(input);
	std::string token;
	vector<string> result;

	while (std::getline(ss, token, ' ')) {
		result.push_back(token);
	}
	return result;
}