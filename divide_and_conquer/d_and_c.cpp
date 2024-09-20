#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&b,vector<int>&c,vector<int>&a){

int i = 0;
int j = 0;
int k = 0;
while(i<b.size() && j<c.size()){
    if(b[i]<c[j]){
        a[k] = b[i];
        k++;
        i++;
    }
    else{
        a[k] = c[j];
        k++;
        j++;
    }
}

if(i==b.size()){
    while(j<c.size()){   
        a[k] = c[j];
        k++;
        j++;
    }
}


if(j>=c.size()){
  while(i<b.size()){
    a[k] = b[i];
    k++;
    i++;
}


}


}

void mergeSort(vector<int>&a){

int n = a.size();
if(n == 1){
    return;
}
int n1 = n/2;
int n2 = n-n/2;
vector<int>b;
vector<int>c;
for(int i = 0; i<n1; i++){
    b.push_back(a[i]);
}

for(int i = 0; i<n2; i++){
    c.push_back(a[i+n1]);
}

// mergeSort(b);
mergeSort(c);
mergeSort(b);
merge(b,c,a);



}
int main(){
// vector<int>a = {1, 3, 5, 7, 7, 8, 12, 14}; 
// vector<int>b = {2, 3, 3, 6, 10, 11, 13, 15, 16, 18};
// vector<int>arr(a.size()+b.size());


// vector<int>a = {38, 27, 43, 3, 9, 82, 10, 43, 38, 5};
vector<int>a = {101, 58, 73, 9, 0, 65, 14, 23, 89, 42, 58, -10, 73};

mergeSort(a);
for(int ele : a){
    cout<<ele<<" ";
}
    
}