#include "brilliant.h"
//https://brilliant.org/practice/number-bases-level-3-4-challenges/

int main(int argc, char** argv) {
  //  >>> 333*6666  (|3|=3, |6|=4
  // 2219778 -> 22 19 77 8

  // >>> 3333*66666 (4 3's, 5 6's)
  // 222197778 -> 222 19 777 8

  // and so on. So if if we have 61 3's, we'll have 60 2's, 60 7's, 1, 9 and 8

  // the formula is -> (2*(N-1)) + (7*(N-1)) + (1+8+9)
  // we simplify -> (9*N-1)+18
  // Since we have 61 3's, N = 61
  // 9*60 + 18

  printf("%d\n", 9*60 + 18);
  return 0;
}
