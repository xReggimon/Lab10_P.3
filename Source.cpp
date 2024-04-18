#include <iostream>

using namespace std;


int main() {
	const int MAX_STUDENTS = 20;
	int scores[MAX_STUDENTS];
	double input_students;

	cout << "Number of students: ";
	cin >> input_students;
	cout << endl;

	if (input_students <= 0 || input_students > MAX_STUDENTS) {
		return 1;
	}

	for (int i = 0; i <= input_students -1; i++) {

		cout << "Enter score #" << i +1  << ": ";
		cin >> scores[i]; cout << endl;
	}

	int lowest = scores[0];
	int highest = scores[0];
	int total = scores[0];

	for (int i = 1; i < input_students; i++) {
		if (scores[i] > highest) {
			highest = scores[i];
		}
		if (scores[i] < lowest) {
			lowest = scores[i];
		}
		total += scores[i];
	}

	double average = total / input_students;

	cout << "High: " << highest << endl;
	cout << "Low: " << lowest << endl;
	cout << "Average: " << average << endl;

	return 0;
}