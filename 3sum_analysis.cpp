#include<set>
#include<iostream>
#include<vector>
#include<chrono>
#include<random>

using namespace std;
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

int main(){
    vector<int> nums;
    vector<int> times;
    int i = 0; 
    int x = (rand() % 19), y = -x, z= x + y; 
    nums.push_back(x);
    nums.push_back(y);
    nums.push_back(z);
    while( i < 99){
        nums.push_back((rand() % 41)-20);
        i++;
    }
    auto start = chrono::high_resolution_clock::now();
    vector<vector<int>> result = threeSum(nums);
    auto end = chrono::high_resolution_clock::now();
    double time_ms = chrono::duration_cast<chrono::microseconds>(end - start).count() / 1000.0;
    times.push_back(time_ms);
    nums.clear();
    
    nums.push_back(x);
    nums.push_back(y);
    nums.push_back(z);
    while( i < 499){
        nums.push_back((rand() % 41)-20);
        i++;
    }
    start = chrono::high_resolution_clock::now();
    result = threeSum(nums);
    end = chrono::high_resolution_clock::now();
    time_ms = chrono::duration_cast<chrono::microseconds>(end - start).count() / 1000.0;
    times.push_back(time_ms);
    nums.clear();
    
    nums.push_back(x);
    nums.push_back(y);
    nums.push_back(z);
    while( i < 999){
        nums.push_back((rand() % 41)-20);
        i++;
    }
    start = chrono::high_resolution_clock::now();
    result = threeSum(nums);
    end = chrono::high_resolution_clock::now();
    time_ms = chrono::duration_cast<chrono::microseconds>(end - start).count() / 1000.0;
    times.push_back(time_ms);
    nums.clear();
    
    nums.push_back(x);
    nums.push_back(y);
    nums.push_back(z);
    while( i < 2000){
        nums.push_back((rand() % 41)-20);
        i++;
    }
    start = chrono::high_resolution_clock::now();
    result = threeSum(nums);
    end = chrono::high_resolution_clock::now();
    time_ms = chrono::duration_cast<chrono::microseconds>(end - start).count() / 1000.0;
    times.push_back(time_ms);
    nums.clear();
    
    nums.push_back(x);
    nums.push_back(y);
    nums.push_back(z);
    while( i < 3999){
        nums.push_back((rand() % 41)-20);
        i++;
    }
    start = chrono::high_resolution_clock::now();
    result = threeSum(nums);
    end = chrono::high_resolution_clock::now();
    time_ms = chrono::duration_cast<chrono::microseconds>(end - start).count() / 1000.0;
    times.push_back(time_ms);
    nums.clear();
    
    for(int i = 0; i< times.size(); i++){
        cout << times.at(i)<<endl;
    }
    return 0;

    // 100, 500, 1000 4000,8000
    // 100, 500, 1000 2000,4000
}
