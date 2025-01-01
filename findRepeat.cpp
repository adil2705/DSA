#find all repeatating element


// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<unordered_map>

using namespace std;
void findRepeat(vector<int>arr){
    int n=arr.size();
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++){
    mp[arr[i]]++;
    }
    
    for(auto a:mp){
        if(a.second>1){
        cout<<a.first;
    }
    }
    
}

int main() {
    vector<int> arr = {1,1,2,3,4,4,5,2};
    findRepeat(arr);
    
    return 0;
}
