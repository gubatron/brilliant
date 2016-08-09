//https://brilliant.org/mathematics-problem/kamilas-triangle-of-odd-numbers/?group=I3OlYiQan3eZ
import java.util.List;
import java.util.ArrayList;

public class KamillasTriangleOfOddNumbers {
    //we asume the first row to be row=1.
    public static List<Integer> generateOddNumbers(int row, final int offsetNumber) {
        List<Integer> results = new ArrayList<Integer>(row);
        int localOffset = offsetNumber;
 
        for (int i=0;i<row; i++) {
            results.add(localOffset);
            localOffset+=2;
        }
        return results;
    }

    public static void printList(List<Integer> list) {
        for (Integer i:list) {
            System.out.print(i + " ");
        }
        System.out.println("");
    }

    public static void main(String[] args) {
        int row = 1;
        int offsetNumber=1;

        boolean found2013 = false;
        while (!found2013) {
            List<Integer> oddList = generateOddNumbers(row,offsetNumber);
            offsetNumber = oddList.get(oddList.size()-1) + 2;
            System.out.print("Row " + row + " -> ");
            printList(oddList);
            if (oddList.contains(2013)) {
                break;
            }
            row++;
        }
        System.out.println("Found 2013 on row " + row);
    }
}
