    void quickSort(vector<int> &a,int p,int r){
        if(p<r){
            int q=partition(a,p,r);
            quickSort(a,p,q-1);
            quickSort(a,q+1,r);
        }
    }
    int partition(vector<int> &a,int p,int r){
        int x=a[r];
        int i=p-1;
        for(int j=p;j<=r-1;j++){
            if(a[j]<=x){
                i=i+1;
                swap(a[i],a[j]);
            }
        }
        swap(a[i+1],a[r]);
        return i+1;
    }
