#include "brilliant.h"
#include <stdio.h>
#include <math.h>
#define true 1
#define false 0

// gcc -O -c brilliant.c -> brilliant.o
// gcc brilliant.o <your.c> -o <your_executable>

//4 spaces on the left are intentional so you can copy and paste
//to brilliant's comments.

double factorial(int n) {
  double result = 1;
  if (n > 1) {
    result = n * factorial(n-1);
  }
  return result;
}

long sumdigits(long n) {
  long sum = 0;
  while (n != 0) {
    double m = fmod(n,10);
    sum += m;
    n /= 10;
  }
  return sum;
}

double combinations(int n, int k) {
  return factorial(n) / (factorial(k) * (factorial(n-k)));
}

double permutations(int n, int k) {
  return factorial(n) / factorial(n-k);
}

int gcd(int n, int m) {
  int r;
  while (n != 0) {
    r = n; 
    n = m % n;  
    m = r;
  }
  return m;
}

// slower than gcd
int gcd_knuth(int m, int n) {
  if (m < n) {
    int t = m;
    m = n;
    n = t;
  }

  int r=-1;
  do {
    r = m % n;
    if (r == 0) {
      return n;
    }
    m = n;
    n = r;
  } while (r != 0);
  return 1;
}

int gcd3(int a, int b, int c) {
  return gcd(gcd(a,b),c);
}

int coprime(int a, int b) {
  return gcd(a,b) == 1;
}

int coprime3(int a, int b, int c) {
  return gcd(a,b) == 1 && gcd(a,c) == 1 && gcd(b,c) == 1;
}

int reverse(int n) {
  int result = 0;
  while (n > 0) {
    result = result * 10 + n%10;
    n = n/10;
  }
  return result;
}

int isPrime(int n) {
  int i;
  for (i=1; i<n; i++) {
    if (n % i == 0 && i!=1) {
      return false;
    }
  }
  return true;
};

int min(int a, int b) {
  int result = b;
  if (a < b) {
    result = a;
  }
  return result;
}

int max(int a, int b) {
  int result = b;
  if (a > b) {
    result = a;
  }
  return result;
}

int cmpInt(const void *a, const void *b) {
  return ( *(int*) a - *(int*) b);
}


