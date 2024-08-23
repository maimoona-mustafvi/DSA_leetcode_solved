class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
    
    for (int i = 0; i < size && n > 0; ++i) {
        if (flowerbed[i] == 0) {
            bool emptyLeft = (i == 0) || (flowerbed[i - 1] == 0); // Check if the left plot is empty or if it's the first plot
            bool emptyRight = (i == size - 1) || (flowerbed[i + 1] == 0); // Check if the right plot is empty or if it's the last plot
            
            if (emptyLeft && emptyRight) {
                flowerbed[i] = 1;  // Plant a flower here
                --n;  // Decrease the number of flowers to plant
                i++;  // Move to the plot after next as the adjacent plot is now occupied
            }
        }
    }
    
    return n == 0;
    }
};