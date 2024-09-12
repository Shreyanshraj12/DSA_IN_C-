#include<bits/stdc++.h>
using namespace std;


// int BinarySearch(int *arr,int size, int key){
// int start = 0;
// int end = 7;
// int mid;
// while(start<=end){

//  mid = (start+end)/2;
//     if(arr[mid] == key){
//         return mid;
//     }
//     else if(arr[mid]<key){
// start = mid+1;
//     }
//     else{
//         end = mid-1;

//     }
//     // mid = (start+end)/2;
// }
// return -1;

// }


    int firstOccurence(vector<int> v,int target){
    int start = 0;
    int end = v.size()-1;
    int mid;
    int store = -1;
    while(start<=end){
        mid = (start+end)/2;
        if(v[mid] == target){
    store = mid;
    end = mid-1;
        }

        else if(v[mid]<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }

return store;

    }




int main(){

//  Searching Algorithm Linear Search, Binary Search=>Elements Should be in monotonic order 
// mid = s+(e-s)/2
// Time complexity O(logn) where n is the size of an array.
// int size = 7;
// int arr[] = {1,2,3,4,5,6,7,8};
// int Result = BinarySearch(arr,size,6);
// cout<<Result;


// Binary Search Function stl
// vector<int>arr{1,2,3,4,5,6,7};

// if(binary_search(arr.begin(),arr.end(),56)){
//     cout<<"Found"<<endl;
// }

// else{
//     cout<<"Not Found";
// }


// Find The First Occurence of an element



vector<int>v{1,3,4,4,4,4,6,7};
int target = 67;
int ans = firstOccurence(v,target);
cout<<ans;








}