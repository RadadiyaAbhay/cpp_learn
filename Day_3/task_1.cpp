#include<iostream>
using namespace std;
#include<string.h>

class student{
	private:
		int id;
		
	public:
		int age;
		float percentage;
		char student_name[100];
	
	void setstu(int i,int k , float m ,char a[100]){
		id = i;
		age =k;
		percentage = m;
		strcpy(student_name,a);
	}
	void getstu(){
		cout<<"Student Id = "<<id<<endl<<"Student Age = "<<age<<endl<<"Student Percentage = "<<percentage<<endl<<"Student Name = "<<student_name<<endl<<endl;
	}	
		
	
};
main(){
	student s[10];
	int i,z,x,y;
	char f[100];
		for(i=0;i<10;i++){
		
		cout<<"Student Data "<<i+1<<endl;
		cout<<"Enter Student id = ";
		cin>>z;
		cout<<"Enter Student Age = ";
		cin>>x;
		cout<<"Enter Student Percentage = ";
		cin>>y;
		cout<<"Enter Student Name = ";
		scanf("%s",&f);
		cout<<endl;
		cout<<"Student Data "<<i+1<<endl;
		s[i].setstu(z,x,y,f);
		s[i].getstu();
		
	}
}