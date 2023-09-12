

int secondlargest(int n,vector<int>a){
      int secondlargest=-1;
   int largest=a[0];
   for(int i=1;i<n;i++){
       if(a[i]>largest){
           secondlargest=largest;
           largest=a[i];
       } else if (a[i] < largest && a[i] > secondlargest) {
           secondlargest = a[i];
       }
      
   } return secondlargest;
}
int secondsmallest(int n,vector<int>&a){
    int smallest=a[0];
    int ssmallest=INT_MAX;
    for(int i=1;i<n;i++){
        if(a[i]<smallest){
            ssmallest=smallest;
            smallest=a[i];
        }else if(a[i]!=smallest&&a[i]<ssmallest){
            ssmallest=a[i];
        }

    }return ssmallest;
}
vector<int> getSecondOrderElements(int n, vector<int>&a) {

 int slargest=secondlargest(n,a);
 int secondsmal=secondsmallest(n,a);
 return {slargest,secondsmal};
}
