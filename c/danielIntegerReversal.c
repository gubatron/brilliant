    //danielIntegerReversal.c
    //https://brilliant.org/mathematics-problem/daniels-integer-reversal/?group=BHdz9sV2JA3R
    #include <stdio.h>

    int reverse(int n) {
        int result = 0;
        while (n > 0) {
            result = result * 10 + n%10;
            n = n/10;
        }
        return result;
    }

    int main(char* args, int nArgs) {
        int n,results = 0;
        float m,condition = 0;

        for (n=100; n < 1000; n++) {
            m = (float) reverse(n); 
            condition = n*(27/38.0);
            if (condition == m) {
                printf("m=%f  %d*(27/28)=%f !\n",
                       m,
                       n,
                       condition);
                results++;
            }
        }
        printf("found %d numbers.\n",results);
    }
