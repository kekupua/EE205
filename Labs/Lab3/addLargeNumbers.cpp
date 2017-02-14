/*
By:			Sean Teramae
Login:		teramae8
Section:	1
*/

#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main() {
	int carry = 0, sum = 0, i = 0;
	string s1, s2, temp, result = "";
	cout << "Enter the first number: " << endl;
	cin >> s1;
	cout << "Enter the second number: " << endl;
	cin >> s2;

	// Find which string is bigger
	if (s2.length() > s1.length()) {
		temp = s1;
		s1 = s2;
		s2 = temp;
	}

	// Fill the result   
	for (i = s2.length()-1; i >= 0; i--) {
		sum = s2[i] + s1[i + s1.length() - s2.length()] + carry - 2 * '0';
		carry = sum / 10;
		sum %= 10;
		result = (char)(sum + '0') + result;
	}

	i = s1.length() - s2.length() - 1;
	while (i >= 0) {
		sum = s1[i] + carry - '0';
		carry = sum / 10;
		sum %= 10;
		result = (char)(sum + '0') + result;
		i--;
	}

	// Add carry
	if (carry != 0) {
		result = (char)(carry + '0') + result;
	}

	// Allocate new array
	int *answer;
	answer = (int*)malloc(result.length() * sizeof(int));

	// Print Answer
	for (int j = 0; j < result.length(); ++j) {
		answer[j] = result[j] - '0';
		cout << answer[j];
	}
	
	// Free all allocated memory
	free(answer);
	return 0;
}