    #include <stdio.h>
    #include "brilliant.h"
    #define LIMIT 1000

    //https://brilliant.org/assessment/s/number-theory/4582521/
    int main(int count, char** args) {

    	int a,b,c = 0;
    	int results = 0;

    	for (a=1; a<LIMIT; a++) {
    		for (b=1; b<LIMIT; b++) {
    			for (c=1; c<LIMIT; c++) {
    				if (a < b && b < c &&
                        ((b*c - 31) % a == 0) &&
    					((c*a - 31) % b == 0) &&
    					((a*b - 31) % c == 0) &&
    					coprime3(a,b,c)==1) {
    							results++;
    							printf("(%d,%d,%d) found:%d\n\n",
    								a,
    								b,
    								c,
    								results);
    				}
    			}
    		}
    	}

    	return 0;
    } 