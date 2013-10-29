#ifndef BRILLIANT_H
#define BRILLIANT_H

double factorial(int n);
double combinations(int n, int k);
double permutations(int n, int k);

//greatest common divisor
int gcd(int a, int b);
int gcd3(int a, int b, int c);

int coprime(int a, int b);
int coprime3(int a, int b, int c);

//reverse integer
int reverse(int n);

//is prime
int isPrime(int n);

int min(int a, int b);
int max(int a, int b);

//qsort comparison function for integers
int cmpInt(const void *a, const void *b);

#endif
