#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(4);
    v.push_back(3);
    v.push_back(18);
    v.push_back(1);
    v.push_back(9);

sort(v.begin(),v.end());
for(int val:v){
    cout<<val<<" ";
}
}