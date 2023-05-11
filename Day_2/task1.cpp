#include<iostream>
using namespace std;

class car{
	public:
	int model_no;
	char model_name[1000];
}c[1000];

main(){
	int i,n;
	cout<<"Enter Total Car = ";
		cin>>n;
	for(i=0;i<n;i++){
		cout<<"Enter Model_no = ";
		cin>>c[i].model_no;
		cout<<"Enter Model_name = ";
		cin>>c[i].model_name;
	}
	for(i=0;i<n;i++){
		cout<<"Model No. = "<<c[i].model_no<<endl<<"Model Name = "<<c[i].model_name;
	}
}