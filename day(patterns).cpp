// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void pattern1(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern3(int n){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void pattern5(int n){
    for (int i=1;i<=n;i++){
        for (int j=0;j<=n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void pattern6(int n){
    for (int i=0;i<n;i++){
        for (int j=1;j<=n-i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}
void pattern7(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i;j++){
            cout<<"-";
        }
         for (int j=0;j<(2*i)+1;j++){
            cout<<"*";
        }
         for (int j=0;j<n-i;j++){
            cout<<"-";
        }
        
        cout<<endl;
    }
}
void pattern8(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<i;j++){
            cout<<" ";
        }
         for (int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
         for (int j=0;j<i;j++){
            cout<<" ";
        }
        
        cout<<endl;
    }
}
void pattern9(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i;j++){
            cout<<" ";
        }
         for (int j=0;j<(2*i)+1;j++){
            cout<<"*";
        }
         for (int j=0;j<n-i;j++){
            cout<<" ";
        }
        
        
        cout<<endl;
    }
     for (int i=0;i<n;i++){
        for (int j=0;j<i;j++){
            cout<<" ";
        }
         for (int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
         for (int j=0;j<i;j++){
            cout<<" ";
        }
        
        cout<<endl;
    }
}
void pattern10(int n){
    for (int i=0;i<=2*n- 1;i++){
        int star=i;
        if(i>n){ 
            star=2*n- i;
        }
        for (int j=0;j<=star;j++){
            cout<<"*";
        }
       
       
        
        cout<<endl;
    }
}
void pattern11(int n){
    int start =1;
    for(int i=0;i<n;i++){
        if (i%2==0){
            start=1;
        }
        else{start=0;}
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    
        
    } 
}
void pattern12(int n){
    int space=2*(n-1);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<j;
        }for (int j=0;j<=space;j++){
            cout<<" ";
         
        }for (int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space=space-2;
           
    }}
    
void pattern13(int n){
    int num=1;
    for (int i=0;i<=n;i++){
        for (int j=0;j<=i;j++){
            
            cout<<num<<" ";
            
            num=num+1;
        }cout<<endl;
        
    }
}    

void pattern14(int n){
    for (int i=0;i<=n;i++){
        for(char j='A';j<='A'+i;j++){
            cout<<j;
        }cout<<endl;
    }
}
void pattern15(int n){
    for (int i=n;i>=0;i--){
        for(char j='A';j<='A'+i;j++){
            cout<<j;
        }cout<<endl;
    }
}
void pattern16(int n){
    for (int i=0;i<=n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch;
        }cout<<endl;
    }
}
void pattern17(int n){
    for (int i=0;i<=n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch;
        }cout<<endl;
    }
}
void pattern18(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i;j++){
            cout<<"-";
        }
        char ch='A';
      int  breakpoint=(2*i+1)/2;
         for (int j=0;j<(2*i)+1;j++){
            cout<<ch;
            if(j<=breakpoint){ch++;}
            else{ch--;}
        }
         for (int j=0;j<n-i;j++){
            cout<<"-";
        }
        
        cout<<endl;
   
    }
}

int main() {
    // Write C++ code here
     int n=4;
     pattern18(n);

     

    return 0;
}
