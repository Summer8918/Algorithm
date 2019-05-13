#include<stdio.h>
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void merge(vector<int> &A,int p,int q,int r);
void merge_sort(vector<int> &A,int p,int r);

int main()
{
    vector<int> A = {12,5,9,8,4,7,10,3};
    merge_sort(A,0,A.size()-1);
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<endl;
    }
    return 0;
}
// p<=q<r
void merge(vector<int> &A,int p,int q,int r){
    int n1 = q-p+1;
    int n2 = r-q;
    vector<int> L (n1+1);
    vector<int> R (n2+1);
    int i=0,j=0;
    for(i=0;i<n1;i++){
        L[i]=A[p+i];
    }
    for(j=0;j<n2;j++){
        R[j]=A[q+j+1];
    }
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    i=0;
    j=0;
    for(int k=p;k<=r;k++){
        if(L[i]<=R[j]){
            A[k]=L[i];
            i++;
        }
        else{
            A[k]=R[j];
            j++;
        }
    }
}

void merge_sort(vector<int> &A,int p,int r){
    if(p<r){
        int q = (p+r)/2;
        merge_sort(A,p,q);
        merge_sort(A,q+1,r);
        merge(A,p,q,r);
    }
}