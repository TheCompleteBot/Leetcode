#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int>nums1_copy;
    for(int i=0;i<m;i++){
        nums1_copy.push_back(nums1[i]);
    }
    int i1=0;
    int i2=0;
    int main_index=0;
    while(i1<m && i2<n){
        if(nums1_copy[i1]<nums2[i2]){
            nums1[main_index++]=nums1_copy[i1++];
        }
        else{
            nums1[main_index++]=nums2[i2++];
        }
    }
    while(i1<m){
        nums1[main_index++]=nums1_copy[i1++];
    }
    while(i2<n){
        nums1[main_index++]=nums2[i2++];
    }

    return;
    }

int main(){
    vector<int>nums1={1};
    int m=1;
    vector<int>nums2={};
    int n=0;
    merge(nums1,m,nums2,n);
    for(int i=0;i<m+n;i++){
        cout<<nums1[i]<<" ";
    }

return 0;

}