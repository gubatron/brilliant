//https://brilliant.org/mathematics-problem/what-superpowers-would-you-have/?group=Pq05dpGBI6Ys
    public class LeastPositiveK {
    public static void main(String[] args) {
	    for (int k = 1; k < 1000; k++) {
		    for (int a = 1; a <= 1000; a++) {
			    for (int b = 1; b <= 1000; b++) {
			        int kCube = k*k*k;
			        int a4 = a*a*a*a;
			        int b4 = b*b*b*b;
			        int ab = a+b;
			        int ab4 = ab*ab*ab*ab;
			        int sumRight = a4+b4+ab4;
			        if (sumRight == kCube && a != b) {
			    	    System.out.println("k="+k+", a="+a+", b="+b);
			        }
			    }
		    }
	    }
    }
    }
