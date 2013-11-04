//https://brilliant.org/mathematics-problem/michaels-integer-solutions/?group=1lR5Ri04PEdu
public class MichaelsIntegerSolutions {
	public static boolean f(int a, int b) {
		return ((a*a*a*a) - 2*a*a) == (b*b + 7);
	}

	public static void main(String[] args) {
		int foundPair = 0;
		for (int a=-1000; a <= 1000; a++) {
			for (int b=-1000; b <= 1000; b++) {
				if (f(a,b)) {
					foundPair++;
					System.out.println("("+a+","+b+") => " + foundPair);
				}
			}
		}
	}
}
