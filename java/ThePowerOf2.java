//ThePowerOf2 - https://brilliant.org/mathematics-problem/the-power-of-2/?group=1lR5Ri04PEdu
public class ThePowerOf2 {
	public static void main(String[] args) {
		int resultsFound = 0;
		for (int k=0; k < 1000; k++) {
			for (int m=0; m < 1000; m++) {
				long r = (long) (Math.pow(2,k) - Math.pow(2,m));
				if (r <= 1000 && r > 0) {
					resultsFound++;
					System.out.println("("+k+","+m+") => " + r);
				}
			}
		}
		System.out.println("found -> " + resultsFound);	
	}
}