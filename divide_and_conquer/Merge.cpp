#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int>&a,vector<int>&b,vector<int>&total){
    int i = 0;
    int j = 0;
    int k = 0;
    int m = a.size();
    int n = b.size();
   
    while(i<m && j< n){
        if(a[i]<b[j]){
            total[k] = a[i];
            i++;
            k++;
        }
        else{
            total[k] = b[j];
            j++;
            k++;
        }
    }

    if(i ==m){
        while(j < n){
            total[k] = b[j];
            k++;
            j++;
        }
    }


    if(j == n){
        while(i < m){
            total[k] = a[i];
            k++;
            i++;
        }
    }
}









int main(){
vector<int>a{1,2,3};
vector<int>b{2,5,6};
// vector<int>total(7);
vector<int>total(a.size()+b.size());

Merge(a,b,total);
for(int i = 0; i<total.size(); i++){
    cout<<total[i];
}
}