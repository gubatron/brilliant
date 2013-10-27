      #include <stdio.h>
      #define true 1
      #define false 0

      int isPrime(int n) {
        int i;
        for (i=1; i<n; i++) {
          if (n % i == 0 && i!=1) {
            return false;
          }
        }
        return true;
      };

      int countPrimes(int l[]) {
        int n = 0;
        int i = 0;
        for(i=0; i < 9; i++) {
          if (isPrime(l[i])) {
            n++;
          }
        }
        return n;
      }

      int areDistinct(int a, int b, int c, int d, int e, int f, int g, int h, int i) {
        return a!=b && a!=c && a!=d && a!=e && a!=f && a!=g && a!=h && a!=i &&
        b!=c && b!=d && b!=e && b!=f && b!=g && b!=h && b!=i &&
        c!=d && c!=e && c!=f && c!=g && c!=h && c!=i &&
        d!=e && d!=f && d!=g && d!=h && d!=i &&
        e!=f && e!=g && e!=h && d!=i &&
        f!=g && f!=h && f!=i &&
        g!=h && g!=i &&
        h!=i;
      }

      int areMagic(int a, int b, int c, int d, int e, int f, int g, int h, int i) {
        return a+b+c == d+e+f && d+e+f == g+h+i && a+d+g == b+e+h && b+e+h == c+f+i && a+e+i == c+e+g && a+e+i == a+b+c;
      }

      int main(char** args, int nArgs) {
        int MAX = 28;
        int solutions=0;
        int maxPrimes=0;
        int a=0;
        int b=0;
        int c=0;
        int d=0;
        int e=0;
        int f=0;
        int g=0;
        int h=0;
        int i=0;
        int p=0;

        for (a=1; a < MAX; a++) {
          for (b=1; b < MAX; b++) {
            for (c=1; c < MAX; c++) {
              for (d=1; d < MAX ; d++) {
                for (e=1; e < MAX; e++) {
                  for (f=1; f < MAX; f++) {
                    for (g=1; g < MAX; g++) {
                      for (h=1; h < MAX; h++) {
                        for (i=1; i < MAX; i++) {
                          if (areDistinct(a,b,c,d,e,f,g,h,i)) {
                            if (areMagic(a,b,c,d,e,f,g,h,i)) {
                              int l[9] = {a,b,c,d,e,f,g,h,i}; 
                              solutions = solutions + 1;
                              printf("(%d,%d,%d,\n%d,%d,%d,\n%d,%d,%d)\n\n",a,b,c,d,e,f,g,h,i);
                              p = countPrimes(l);
                              if (p > maxPrimes) {
                                maxPrimes = p;
                              }
                              printf("countains %d primes\n", p);
                              printf("max primes ever used: %d\n\n",maxPrimes);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
