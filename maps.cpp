#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums) {
    unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++; 

    for (auto it : freq) {
        if (it.second == 1) {  
            return it.first;
        }
    }
    
    return -1; 
    }
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "The single number is: " << singleNumber(nums) << endl;
    return 0;
}