#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        // Look at the two numbers in the first edge
        int u = edges[0][0];
        int v = edges[0][1];
        
        // Is 'u' also in the second edge?
        if (u == edges[1][0] || u == edges[1][1]) {
            return u;
        }
        
        // If not, 'v' must be the center
        return v;
    }
};