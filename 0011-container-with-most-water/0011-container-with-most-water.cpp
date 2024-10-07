class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int max_area = 0;

        while(left<right){
            int width = right - left ;
            int h = min(height[left] , height[right]);

            int current_area = width * h;

            max_area = max(current_area , max_area);

            if(height[left] < height[right]){
                left++ ;
            } else{
                right--;
            }
        }
        return max_area;
        }
};