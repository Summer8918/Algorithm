#include<vector>
#include<iostream>
using namespace std;
void shell_sort(vector<int> &nums){
    int n=nums.size();
    int h=1;
    while(h<n/3){
        h=3*h+1;
    }
    while(h>=1){
        for(int i=h;i<n;i++){
            for(int j=i;j>=h && nums[j]<nums[j-h];j-=h){
                swap(nums[j],nums[j-h]);
            }
        }
        h=h/3;
    }
}

int main(){
    vector<int> test={4,6,2,3,1,7,9,5,8};
    shell_sort(test);
    for(int num:test){
        cout<<num<<" ";
    }
    cout<<endl;
}
