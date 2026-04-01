#include<bits/stdc++.h>
using namespace std;

int singlenum(vector<int> &n){
    int ans=0;
    for(int v : n){
        ans = ans^v;
    }
    return ans;
}
int main(){
    vector<int> n = {4,1,2,1,2};
    cout<<"The single number is: "<<singlenum(n)<<endl;
    return 0;
}