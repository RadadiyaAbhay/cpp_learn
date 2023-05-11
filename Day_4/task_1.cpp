#include<iostream>
using namespace std ;
#include<string.h>

class employee{
	int id;
	char name[1000];
	char role[1000];
	int salary;
	int experience;
	char add[1000];
	char email[1000];
	int contact;
	
	public:
		void setemp(int b,char c[1000],char d[1000], int e,int f,char g[1000],char h[1000], int j){
			id=b;
			strcpy(name,c);
			strcpy(role,d);
			salary =e;
			experience =f;
			strcpy(add,g);
			strcpy(email,h);
			contact =j;
	}
	void getemp(){
		cout<<"Employee Id = "<<id<<endl<<"Employee Name = "<<name<<endl<<"Employee Role = "<<role<<endl<<"Employee Salary = "<<salary<<endl<<"Employee Experience = "<<experience<<" Years"<<endl<<"Employee Add = "<<add<<endl<<"Employee Email = "<<email<<endl<<"Employee Contact = "<<contact<<endl<<endl;
	}
	
};

	
	
main(){
	employee a[5];
	
	int i,k,n,o,r;
	char l[1000],m[1000],p[1000],q[1000];
	
	for(i=0;i<5;i++){
	
	cout<<"Employee Data = "<<i+1<<endl<<endl;	
	
	cout<<"Employee Id = ";
	cin>>k;
	cout<<"Employee Name = ";
	scanf("%s",&l);
	cout<<"Employee Role = ";
	scanf("%s",&m);
	cout<<"Employee Salary = ";
	cin>>n;
	cout<<"Employee Experience = ";
	cin>>o;
	cout<<"Employee Address = ";
	scanf("%s",&p);
	cout<<"Employee Email = ";
	scanf("%s",&q);
	cout<<"Employee Contact = ";
	cin>>r;	
	cout<<endl;
		a[i].setemp(k,l,m,n,o,p,q,r);
		a[i].getemp();
		
	}	
}