/*
By:			Sean Teramae
Login:		teramae8
Section:	1
*/

#include <iostream>
#include <new>
#include <cmath>
using namespace std;

// Function Prototypes
float average(float grades[], int size);
float standardDeviation(float grades[], int size, float average);
void printGrades(float grades[], int size, float average, float std);

int main() {
	int count, i = 0;
	float avg, stdD;
	
	// Prompt user for size
	cout << "How many grades are there? :" << endl;
	cin >> count;
	if (count <= 0) return 0;

	// Create new array
	float* arr = new float[count];

	// Prompt user for grades
	cout << "Please enter " << count << " grades" << endl;
	while (i < count) {
		try {
			cin >> arr[i];
			if (arr[i] < 0 || arr[i] >= 100) throw 1;
			++i;
		}
		catch (int error) {
			cout << "Invalid input" << endl;
			continue;
		}
	}

	// Calculations
	avg = average(arr, count);
	stdD = standardDeviation(arr, count, avg);

	printGrades(arr, count, avg, stdD);

	delete[] arr;
	return 0;
}

/*
	@Parameters: array, size
	Calculates average of given array and size
*/
float average(float grades[], int size) {
	float total = 0, average;

	for (int j = 0; j < size; ++j) {
		total += grades[j];
	}
	average = total / size;
	return average;
}

/*
	@Parameters: array, array size, array average
	Calculates standard deviation
*/
float standardDeviation(float grades[], int size, float average) {
	float std = 0;

	for (int j = 0; j < size; ++j) {
		std += pow(grades[j] - average, 2);
	}

	return sqrt(std / size);
}

/*
	@Parameters: array, array size, array average, array standard deviation
	Calculates and displays formatted grades
*/
void printGrades(float grades[], int size, float average, float std) {
	for (int j = 0; j < size; ++j) {
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