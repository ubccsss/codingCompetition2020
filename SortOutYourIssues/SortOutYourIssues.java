import java.util.*;

public class SortOutYourIssues {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        List<Pair> ar = new ArrayList<>();
        while (sc.hasNextLine()) {
            String s = sc.nextLine();
            if (s.equals("")) {
                break;
            }
            ar.add(new Pair(s, ar.size()));
        }
        Collections.sort(ar, new DataComparator());

        for (Pair element: ar) {
            System.out.println(element.first);
        }
    }

    private static class DataComparator implements Comparator<Pair> {
        @Override
        public int compare(Pair a, Pair b) {
            String[] firstString = a.first.split(" ");
            String[] secondString = b.first.split(" ");
            Boolean firstNum = false;
            Boolean secondNum = false;

            try {
                Integer firstInt = Integer.parseInt(firstString[1]);
                firstNum = true;
            } catch (Exception e) {

            }

            try {
                Integer secondInt = Integer.parseInt(secondString[1]);
                secondNum = true;
            } catch (Exception e) {

            }

            if (firstNum && secondNum) {
                if (a.second < b.second) {
                    return -1;
                }
                return 1;
            }
            if (firstNum) {
                return 1;
            }
            if (secondNum) {
                return -1;
            }


            for (int i = 1; i < Math.min(firstString.length, secondString.length); i++) {
                if (firstString[i].compareTo(secondString[i]) < 0) {
                    return -1;
                }
                else if (firstString[i].compareTo(secondString[i]) > 0) {
                    return 1;
                }
            }
            Integer first = Integer.parseInt(firstString[0].substring(firstString[0].length()-1, firstString[0].length()));
            Integer second = Integer.parseInt(secondString[0].substring(secondString[0].length()-1, secondString[0].length()));
            if (first < second) {
                return -1;
            }
            return 1;
        }
    }

    private static class Pair {
        String first;
        Integer second;

        Pair(String first, Integer second) {
            this.first = first;
            this.second = second;
        }
    }
}