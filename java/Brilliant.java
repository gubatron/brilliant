import java.math.BigInteger;
/**
 * Utility class.
 */
class Brilliant {

	public static BigInteger factorial(int num) {
		BigInteger result = BigInteger.ONE;
		BigInteger n = new BigInteger(String.valueOf(num));

	    while (!n.equals(BigInteger.ZERO)) {
	        result = result.multiply(n);
	        n = n.subtract(BigInteger.ONE);
	    }

	    return result;
	}

	 /** Java's BigInteger doesn't have a squared root function, sigh */
    public static BigInteger sqrt(BigInteger n) {
      BigInteger a = BigInteger.ONE;
      BigInteger b = new BigInteger(n.shiftRight(5).add(new BigInteger("8")).toString());
      while(b.compareTo(a) >= 0) {
        BigInteger mid = new BigInteger(a.add(b).shiftRight(1).toString());
        if(mid.multiply(mid).compareTo(n) > 0) b = mid.subtract(BigInteger.ONE);
        else a = mid.add(BigInteger.ONE);
      }
      return a.subtract(BigInteger.ONE);
    }

    public static boolean isPerfectSquare(int n) {
	double root = Math.sqrt(n);
	return root-((double)((int)root)) == 0;
    }

    public static void main(String[] args) {
	System.out.println(factorial(4));
    }

    public static int reverse(int n) {
	int result = 0;
	while (n > 0) {
	    result = result * 10 + n%10;
	    n = n/10;
	}
	return result;
    }
}