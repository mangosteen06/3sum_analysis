#include<set>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        vector<set<int>> temp;
        vector<int> triplet(3);
        for( int i = 0; i < nums.size(); i++){
            for( int j = 0; j < nums.size(); j++){
                for( int k = 0; k < nums.size(); k++){
                    if((nums[i] +nums[j] + nums[k] == 0)&&i != j &&i != k && j !=k){
                        bool cont = true;
                        triplet = {nums[i],nums[j],nums[k]};
                        set<int> triple = {nums[i],nums[j],nums[k]};
                        for(int m = 0; m < temp.size();m++){
                            if(triple == temp.at(m)){
                                cont = false;
                            }
                        }
                        if(cont){
                            result.push_back(triplet);
                            temp.push_back(triple);
                        }
                            }
                        }
                    }
            }
            return result;
    }
};

int main(){
  return 0;
}
