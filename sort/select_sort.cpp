#include<vector>
#include<iostream>
using namespace std;
void select_sort(vector<int> &nums){
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(nums[j]<nums[min]){
                min=j;
            }
        }
        swap(nums[i],nums[min]);
    }
}

int main(){
    vector<int> test={4,6,2,3,1,7,9,5,8};
    select_sort(test);
    for(int num:test){
        cout<<num<<" ";
    }
    cout<<endl;
}
