#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Map to store: <Number we have seen, Its Index>
        unordered_map<int, int> seenNumbers;
        
        for (int i = 0; i < nums.size(); i++) {
            int currentNumber = nums[i];
            int neededComplement = target - currentNumber;
            
            // Check if the complement exists in our map
            // map.find() returns map.end() if the key is NOT found
            if (seenNumbers.find(neededComplement) != seenNumbers.end()) {
                // We found it! Return the index from the map, and our current index
                return {seenNumbers[neededComplement], i};
            }
            
            // If we didn't find it, add our current number to the map
            seenNumbers[currentNumber] = i;
        }
        
        // This return is just to satisfy the compiler, 
        // the problem guarantees exactly one solution exists.
        return {}; 
    }
};