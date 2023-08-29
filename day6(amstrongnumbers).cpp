bool checkArmstrong(int n){
int count=0;
int temp=n;
int orginal=n;
int sum=0;

while(temp>0){
	temp=temp/10;
	count++;
}
while(n){
	sum+=pow(n%10,count);
	n=n/10;
}
if(sum==orginal) return true;
else return false;

}
