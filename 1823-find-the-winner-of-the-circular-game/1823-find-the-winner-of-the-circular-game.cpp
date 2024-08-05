class Solution {
public:
    int findTheWinner(int n, int k) {
        int winner = 0; // Base case for 1 person
        for (int i = 2; i <= n; ++i) {
            winner = (winner + k) % i;
        }
        return winner + 1; // Convert zero-indexed result to one-indexed
    }
};