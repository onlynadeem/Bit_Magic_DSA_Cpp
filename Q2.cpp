//                                   made by Nadeem 
#include<bits/stdc++.h> 
using namespace std;

class Solution
{
    public:
    //Function to find sum of 2 number, without using arithmetic operators
    int sum(int a , int b)
    {
        int A,B,C=0;
        int k=1,r=0;
        while(a|b|C){
            A=a%10;B=b%10;
            int sum=A+B+C;
            r+=(sum%10)*k;
            C=sum/10;
            a/=10;
            b/=10;
            k*=10;
            
        }
        return r;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin >> a>>b;
        
        Solution ob;
        cout<< ob.sum(a,b) <<"\n";
        
    }
    return 0;
}
