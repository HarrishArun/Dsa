#geeks for geeks=12/1,12/2
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        int count=0;
        int n=N;
        while(N>0){
            int digit=N%10;
            if((digit!=0)&&(n%digit==0)){
                count++;
            }
            N=N/10;
        }return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}

#sum of numbers
//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        int count=0;
        int n=N;
        while(N>0){
            int digit=N%10;
            if((digit!=0)&&(n%digit==0)){
                count++;
            }
            N=N/10;
        }return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
