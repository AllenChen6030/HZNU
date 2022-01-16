#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	int grade;
	cin>>grade;
	if(grade>100||grade<0){
		cout<<"Invalid"<<endl;
		return 0;
	}
	int i=grade/10;
	switch (i) {
		case 10:
			cout<<"5.0"<<endl;
			break; 
		case 9:
			cout<<"4."<<grade%10<<endl;
			break;
		case 8:
			cout<<"3."<<grade%10<<endl;
			break;
		case 7:
			cout<<"2."<<grade%10<<endl;
			break;
		case 6:
			cout<<"1."<<grade%10<<endl;
			break;
		default:
			cout<<"Failed"<<endl;
			break;
		
	}
	return 0;
}