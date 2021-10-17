#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int oppositeFaceOfDice(int N)
    {
        int a ;
       if(N==1){
           a=6;
       }
       else if(N==2){
           a=5;
       }
       else if(N==3){
           a=4;
       }
       else if(N==4) {
           a=3;
       }
       else if(N==5){
           a=2 ;
       }
       else {
           a=1;
       }
       return a ;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        int ans  = ob.oppositeFaceOfDice(N);
        cout<<ans<<endl;
    }
    return 0;
}  // } Driver Code Ends
