class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0; 
        int j = nums.size() - 1; 

        while(i <= j){

            int media = i + (j-i)/2; 
            if(nums.at(media) == target){
                return media; 
            }else if(nums.at(media) > target){
                j = media - 1; 
            }else{
                i = media + 1; 
            }
        }

        return -1; 
    }
};
