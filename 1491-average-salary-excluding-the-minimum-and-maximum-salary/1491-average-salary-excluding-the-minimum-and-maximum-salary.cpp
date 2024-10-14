class Solution {
public:
    double average(vector<int>& salary) {
        double max = salary[0];
        double min = salary[0];
        double sum = 0;
        for(int i=0 ; i<salary.size() ; i++){
            sum = sum + salary[i];
            if(salary[i]>max){
                max = salary[i];
            }
            if(salary[i]<min){
                min = salary[i];
            }
        }
        return (sum - min - max)/(salary.size() - 2);
    }
};