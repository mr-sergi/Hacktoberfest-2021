#include<vector>
#include<iostream>

using namespace std;


void merge(vector<int>&arr,int s,int e){
    int i=s;
    int m=s+(e-s)/2;
    int j=m+1;
    vector<int>tmp;
    while ((i<=m) && (j<=e))
    {
        if(arr[i]<=arr[j]){
            tmp.push_back(arr[i++]);
        }
        else{
            tmp.push_back(arr[j++]);
        }
    }
    while(i<=m){
        tmp.push_back(arr[i++]);
    }
    while(j<=e){
        tmp.push_back(arr[j++]);
    }

    int k=0;
    for(int l=s;l<=e;l++){
        arr[l]=tmp[k++];
    }

    return;
    
}

void mergeSort(vector<int>&arr,int s,int e){
    // base case
    if(s>=e) return;
    // recursive
    int m=s+(e-s)/2;
    mergeSort(arr,s,m);     // 10 5 2 0... 10 5..10
    mergeSort(arr,m+1,e);   // 5...2 0...7 6 4
    return merge(arr,s,e);    
}


int main(){

    int n;cin>>n;
    vector<int>arr(n);   // 10 5 2 0 7 6 4
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    mergeSort(arr,0,(n-1));

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

}
