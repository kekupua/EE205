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
	vector<float> grades;

	// Check if the file is open and read in data
	while (getline(file, data)) {
		// Create new tokenized vector
		vector<string> tokenized;
		tokenized = split(data);

		// Add the new grades into the grades vector
		for (int i = 0; i < tokenized.size(); ++i) {
			cout << tokenized[i] << endl;
			grades.push_back(stoi(tokenized[i]));
		}
	}

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