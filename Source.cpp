#include <iostream>
using namespace std;


int main() {
	const int MAX_STUDENTS = 20;
	double scores[MAX_STUDENTS];
	int input_students;

	cout << "Number of students: ";
	cin >> input_students;
	cout << endl;

	if (input_students <= 0 || input_students > MAX_STUDENTS) {
		return 1;
	}

	for (int i = 1; i <= input_students; i++) {

		cout << "Enter score #" << i << ": " << endl;
		cin >> scores[i];
	}

	int highest = scores[0];
	int lowest = scores[0];
	double total = scores[0];

	for (int i = 1; i <= input_students; i++) {
		if (scores[i] > highest) {
			highest = scores[i];
		}
		if (scores[i] < lowest) {
			lowest = scores[i];
		}
		total += scores[i];
	}
}