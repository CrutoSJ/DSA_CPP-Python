// #Question:-

// Link-> https://www.geeksforgeeks.org/problems/modular-exponentiation-for-large-numbers5537/1

// #Solution:-

#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
        long long int PowMod(long long int x,long long int n,long long int M)
        {
        long long int ans=1;
        
        while(n>0){
            
            if(n%2==0){
                x=(x*x)%M;
                n/=2;
            }
            else{
                ans=(ans*x)%M;
                n=n-1;
            }
        }
    return ans%M;
    }
};