#include<vector>
#include<iostream>
using namespace std;
void bubble_sort(vector<int> &nums){
    int n=nums.size();
    bool is_sorted=false;
    for(int i=n-1;i>0 && !is_sorted;i--){
        is_sorted=true;
        for(int j=0;j<i;j++){
            if(nums[j+1]<nums[j]){
                is_sorted=false;
                swap(nums[j],nums[j+1]);
            }
        }
    }
}

int main(){
    vector<int> test={4,6,2,3,1,7,9,5,8};
    bubble_sort(test);
    for(int num:test){
        cout<<num<<" ";
    }
    cout<<endl;
}
