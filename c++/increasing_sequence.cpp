#include <iostream>
#include <fstream>
#include <limits>
#include <stdlib.h>
using namespace std;

/**
 * Given a cs_sequence.txt with a sequence of integers.
 * The goal is to find the absolute sum of the longest sequence of increasing numbers.
 */

int main() {
	ifstream seq_file;
	seq_file.open("cs_sequence.txt");

	if (seq_file.is_open()) {
		int longest_stack_height = 0;
		int longest_stack_abs_sum = 0;
		int current_stack_height = 0;
		int current_stack_sum = 0;
		int current_stack_abs_sum = 0;
		int last_value_seen = INT_MIN;

		string line;
		while (getline(seq_file, line)) {
			int current_value = (int) atoi(line.c_str());
			cout << current_value << "\n";

			//new stack
			if (current_value > last_value_seen) {
				current_stack_height++;
				current_stack_sum += current_value;
			} else {
				current_stack_height = 1;
				current_stack_sum = current_value;
			}

			current_stack_abs_sum = abs(current_stack_sum);
			last_value_seen = current_value;

			if (current_stack_height > longest_stack_height) {
				longest_stack_height = current_stack_height;
				longest_stack_abs_sum = current_stack_abs_sum;
			}
		}
		seq_file.close();

		cout << "Longest Sequence has " << longest_stack_height << " elements.\n";
		cout << "Abs Sum of that sequence is " <<  longest_stack_abs_sum << ".\n";
	} else {
		cout << "Could not open file.\n";
	}

	return 0;
}
