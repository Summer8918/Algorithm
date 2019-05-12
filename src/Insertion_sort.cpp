#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
void insertion_sort(vector<int> nums){
    int j,i;
    int len = nums.size();
    for(j=1;j<len;j++){
        int key = nums[j];
        i = j-1;
        while(i>=0 && nums[i]>key){
            nums[i+1]=nums[i];
            i--;
        }
        nums[i+1]=key;
    }
    cout<<"len="<<len<<endl;
    for(i=0;i<len;i++){
        cout<<nums[i]<<endl;
    }
}
int main(){
    vector<int> nums = {5,1,9,3,2,6};
    insertion_sort(nums);
    return 0;
}

