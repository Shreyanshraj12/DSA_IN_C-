#include<bits/stdc++.h>
using namespace std;

 int solve(int dividend, int divisor){
    int start = 0;
    int end = abs(dividend);
    int mid;
    int store  = 0;
    while(start<=end){
        // mid = start+(end-start)/2;
        mid = (start+end)/2;
        if(abs(mid*divisor) == abs(dividend)){
            store = mid;
            break;
        
        }
        else if(abs(mid*divisor) > abs(dividend)){
            end = mid-1;
        }
        else{
            store = mid;
start = mid+1;
        }
    }
    
if((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0))
return store;
else{
    return -store;
}


 }











int main(){

int dividend =   -10;
int divisor = 7;







int ans = solve(dividend,divisor);
cout<<ans;
















}