#include<vector>
#include<iostream>
using namespace std;
int parent(int i){
    return (i-1)/2;
}

int left(int i){
    return (2*i+1);
}

int right(int i){
    return (2*i+2);
}

void max_heapify(vector<int> &a,int i,int heap_size){
    int l=left(i);
    int r=right(i);
    int largest=0;
    if(l<heap_size && a[l]>a[i]){
        largest=l;
    }
    else{
        largest=i;
    }
    if(r<heap_size && a[r]>a[largest]){
        largest=r;
    }
    if(largest != i){
        swap(a[largest],a[i]);
        max_heapify(a,largest,heap_size);
    }
}

void build_max_heap(vector<int> &a){
    int n=a.size();
    for(int i=n/2-1;i>=0;i--){
        max_heapify(a,i,a.size());
    }
}

void heap_sort(vector<int> &a){
    build_max_heap(a);
    int heap_size=a.size();
    for(int i=a.size()-1;i>=1;--i){
        swap(a[0],a[i]);
        --heap_size;
        max_heapify(a,0,heap_size);
    }
}

int main(){
    vector<int> test={4,6,2,3,1,7,9,5,8};
    heap_sort(test);
    for(int num:test){
        cout<<num<<" ";
    }
    cout<<endl;
}
