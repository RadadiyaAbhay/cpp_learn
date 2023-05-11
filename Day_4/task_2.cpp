#include<iostream>
using namespace std ;

main(){
	int i,j;
	
	cout<<"Enter Year only 2000 to 3000"<<endl<<"Enter Year = ";
	cin>>j;
	
	for(i=j;i<=j;i++){
		if(j>=2000 && j<=3000){
		
			if(j%4==0){
				cout<<"This is Leap Year";
			}else{
				cout<<"This is Not Leap Year";
			}
		}else{
			cout<<"Enter Vaild Year";
		}
	}
}