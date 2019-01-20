#include "brilliant.h"
#include <stdio.h>

// gcc brilliant.o test.c -o test

int main(int argc, char** args) {
  //printf("gcd(544, 119) => %d\n", gcd(544, 119));
  //printf("gcd(119, 544) => %d\n", gcd(119, 544));
  //printf("gcd_knuth(544, 119) => %d\n", gcd_knuth(544, 119));
  //printf("gcd_knuth(119, 544) => %d\n", gcd_knuth(119, 544));

  for (int i=1; i < 99999999; i++) {
    gcd_knuth(i*2,i*6);
  }

  return 0;
}
