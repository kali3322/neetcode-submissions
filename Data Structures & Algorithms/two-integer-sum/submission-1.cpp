class Solution {
public:

vector<int> twoSum(vector<int>& nums, int target){

    vector<int> result;

        for(int i = 0 ; i < nums.size() ; ++i){

            int valor_buscado = target - nums[i]; 

            for(int j = i + 1 ; j < nums.size() ; ++j){

                if( nums[j] == valor_buscado){
                    result.push_back(i); 
                    result.push_back(j);
                    return result; 

                }

            }

        }

        return result; 
}


};
