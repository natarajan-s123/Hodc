import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int totalBalls = sc.nextInt();
        int totalRuns = sc.nextInt();
        int currentRuns = sc.nextInt();
        int ballsBowled = sc.nextInt();

        int totalOvers = totalBalls / 6;
        int oversCompleted = ballsBowled / 6;
        int ballsInCurrentOver = ballsBowled % 6;

        double oversFinished = oversCompleted + ballsInCurrentOver * 0.1;
        double currentRunRate = currentRuns / oversFinished;
        double totalRunRate = (double) totalRuns / totalOvers;
        String eligibility = currentRunRate >= totalRunRate ? "Eligible to Win" : "Not Eligible to Win";

        System.out.println(totalOvers);
        System.out.println(String.format("%.1f", oversFinished));
        System.out.println(String.format("%.1f", currentRunRate));
        System.out.println(String.format("%.1f", totalRunRate));
        System.out.println(eligibility);
    }
}
