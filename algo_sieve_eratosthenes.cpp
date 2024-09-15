#include<bits/stdc++.h>
using namespace std;


// bool IsPrime(int n){
//     if(n<=1){
//         return false;
//     }
//     for(int i = 2; i<n; i++){
//         if(n%i == 0){
//             return false;
//         }
//     }
//     return true;
// }





// int main(){
// int n;
// cin>>n;
// int count = 0;
// for(int i = 0; i<n; i++){
//    if( IsPrime(i)){
//     ++count;
//    }
// }
// cout<<count<<endl;
// }

// ALGORITHM OF SIEVE OF ERATOSTHENES. TIME COMPLEXITY O(N LOG(LOGN))

// int countPrimes(int n){
//     if (n == 0){
//         return false;
//     }



    
// vector<bool> prime(n,true);
// prime[0] = prime[1] = false;
// int ans = 0;

// for(int i = 2; i<n; i++){
//     if(prime[i]){
//         ans++;

//         int j = 2*i;
//         while(j<n){
//             prime[j] = false;
//             j = j+i;
//         }
//     }
// }



// }




