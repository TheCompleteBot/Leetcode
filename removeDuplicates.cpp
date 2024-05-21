#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>&nums){
    vector<int>c;
    int n=nums.size();
    c.push_back(nums[0]);
    int j=0;
    for(int i=0;i<n;){
        if(c[j]==nums[i]){
            i++;
        }
        else{
            c.push_back(nums[i]);
            j++;
            i++;
        }
    }
    int i=0;
    for(i;i<c.size();i++){
        nums[i]=c[i];
    }
    while(i<n){
        nums[i]=-1;
    }
    return c.size();
}

int main(){
vector<int>nums={1,1,2};
cout<<removeDuplicates(nums);

return 0;

}