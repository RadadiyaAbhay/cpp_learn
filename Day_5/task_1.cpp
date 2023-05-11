#include<iostream>
using namespace std;

class bill{
	public:
	int bill_no,i;
	static char seller_name[100];
	
	void setbill(int i){
		bill_no=i;
		
	}
	void getbill(){
		cout<<bill_no<<endl<<seller_name<<endl;
	}
};

char bill::seller_name[100] = "Hari Krupa Mart";

main(){
	bill b1,b2,b3,b4;
	
	b1.setbill(5);
	b2.setbill(10);
	b3.setbill(15);
	b1.getbill();
	b2.getbill();
	b3.getbill();
	
	strcpy(b4.seller_name,"Krupa Mart");
	b4.setbill(20);
	b4.getbill();
}