#include <stdio.h>
/** https://brilliant.org/assessment/new_solvable_pos/combinatorics/2/
In distinct odd-town, the inhabitants want to number their houses with 3-digit positive integers that are odd, 
which have all distinct digits. What is the maximum number of houses in odd-town?

012 is not a 3 digit number.

No 2 houses may have the same house number.

123  is a valid house number, as it is a 3-digit number, odd, and has distinct digits.

*/
int main(int nArgs, char** args) {
  int i=100;
  int oddHouses = 0;
  for (i=100; i <= 999; i++) {
    if (i % 2 == 1) {
      int a = i / 100;
      int b = i % 100 / 10;
      int c = i % 10;

      if (a!=b && b!=c && a!=c) {
        oddHouses++;
	printf("%d (%d,%d,%d) -> %d odd houses found\n", i, a, b, c, oddHouses);
      }
    }
  }
}
