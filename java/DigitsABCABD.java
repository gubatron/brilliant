//https://brilliant.org/mathematics-problem/the-digits-abcabd/?group=xgTxOcOJPlBg
public class DigitsABCABD {
    private static boolean isPerfectSquare(long input) {
	long root = (long) Math.sqrt(input);
	return ((root * root) == input);
    }

    public static void main(String[] args) {
	int resultsFound = 0;
	for (int a=1; a <= 9; a++) {
	    for (int b=0; b <= 9; b++) {
		for (int c=0; c <= 9; c++) {
		    int d = c+1;
		    try {
                        String NStr = String.valueOf(a) +
			    String.valueOf(b) + 
			    String.valueOf(c) +
			    String.valueOf(a) + 
			    String.valueOf(b) +
			    String.valueOf(d);
		        int N = Integer.parseInt(NStr);
		        if (isPerfectSquare(N)) {
			    resultsFound++;
			    System.out.println("Found " + N + ", total " + resultsFound);
		        }
		    } catch (Exception e) {
			System.err.println(e);
		    }
		}
	    }
	}
    }
}