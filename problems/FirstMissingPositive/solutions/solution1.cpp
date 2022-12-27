#include <set>
#include <vector>
using namespace std;

int firstMissingPositive(vector<int>& nums) {
    set<int> numSet;
    sort(nums.begin(), nums.end());
    if(nums[nums.size() - 1] < 1){
        return 1;
    }
    int start = 0;
    for(int i = 0; i<nums.size(); i++){
        if(nums[i] >= 1){
            start = i;
            break;
        }
    }
    for(int i = start; i<nums.size(); i++){
        numSet.insert(nums[i]);
    }
    int count = 1;
    set<int>::iterator itr;
    for(itr = numSet.begin(); itr != numSet.end(); itr++){
        if(count < *itr){
            break;
        }
        count += 1;
    }
    return count;
}