#include <iostream>
#include <new>
#include <vector>
#include <cmath>
using namespace std;

/*
@Parameters: array, size
Calculates average of given array and size
*/
float average(vector<float> grades) {
	float total = 0, average;

	for (int j = 0; j < grades.size(); ++j) {
		total += grades[j];
	}
	average = total / grades.size();
	return average;
}

/*
@Parameters: array, array size, array average
Calculates standard deviation
*/
float standardDeviation(vector<float> grades, float average) {
	float std = 0;

	for (int j = 0; j < grades.size(); ++j) {
		std += pow(grades[j] - average, 2);
	}

	return sqrt(std / grades.size());
}

/*
@Parameters: array, array size, array average, array standard deviation
Calculates and displays formatted grades
*/
void printGrades(vector<float> grades, float average, float std) {
	for (int j = 0; j < grades.size(); ++j) {
		cout << "grades[" << j << "]: ";
		if (grades[j] >= (average + 1.5*std))
			cout << "A" << endl;
		else if (grades[j] >= (average + 0.5*std) && grades[j] < (average + 1.5*std))
			cout << "B" << endl;
		else if (grades[j] >= (average - 0.5*std) && grades[j] < (average + 0.5*std))
			cout << "C" << endl;
		else if (grades[j] >= (average - 1.5*std) && grades[j] < (average - 0.5*std))
			cout << "D" << endl;
		else if (grades[j] < (average - 1.5*std))
			cout << "F" << endl;
	}
}