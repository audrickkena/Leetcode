#include <iostream>
#include <map>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target);

int main(){
    std::vector<int> nums {2, 7, 11, 15};
    std::vector<int> result = twoSum(nums, 9);
    std::cout << "nums array: [";
    for(int i=0; i<nums.size()-1; i++){
        std::cout << nums[i] << " ";
    }
    std::cout << nums[nums.size() - 1] << "]\n";
    for(int i =0; i < result.size(); i++){
        std::cout << result[i] << " ";
    }
    std::cout << "\n";
}

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::map <int, int> numsMap;
    std::vector<int> results;
    for(int i = 0; i < nums.size(); i++){
        numsMap[nums[i]] = i;
    }
    for(int i = 0; i < nums.size(); i++){
        int toFind = target - nums[i];
        if(numsMap.find(toFind) != numsMap.end()){
            if(numsMap[toFind] != i){
                results.push_back(i);
                results.push_back(numsMap[toFind]);
                return results;
            }
        }
    }
    return results;
}