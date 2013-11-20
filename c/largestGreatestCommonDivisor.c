#include <stdio.h>
#include "brilliant.h"

//https://brilliant.org/mathematics-problem/largest-greatest-common-divisor/?group=2hdDZDFwLm1X

int main(int nargs, char** args) {
  int n=1;
  int largestGCDFound = 0;
  
  while (n < 1000 && largestGCDFound < 1000) {
	int a=(5*n)+6;
    int b=(8*n)+7;
    int lastGcd = gcd(a,b);
    if (lastGcd > largestGCDFound) {
    	largestGCDFound = lastGcd;
    	printf("new GCD %d\n", largestGCDFound);
    }
  	n++;    
  }
}