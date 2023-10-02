#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>arr={1,1,2,2,3,4,4,5,6,7};
    int n=arr.size();

    //declaring the map
    map<int,int>mpp;

    for(int i=0;i<n;i++){

        //checking if the element is existed...
        if(mpp.find(arr[i])!=mpp.end()){
            mpp[arr[i]]++;
        }

        //if the element is not existed 
        else {
            mpp[arr[i]]=1;
        }
    }
    
    for(auto it:mpp){
        
        //printhing with key and value
        cout<<it.first<<" "<<it.second<<"\n";
    }
    
}