#include<iostream>
using namespace std;
class data{
	int num1;
	int num2;
	int num3;
	public:
		//funtion with same name
		//function 1
		int sum(int n1, int n2)
		{
			this->num1 = n1;
			this->num2 = n2;
			return num1 + num2;	
		}
		//function 2
		int sum(int n1, int n2, int n3)
		{
			this->num1=n1;
			this->num2=n2;
			this->num3=n3;
			return num1 + num2 + num3;	
		}
};
int main(){
	data d1;
	cout<<"sum of two numbers"<<d1.sum(12,21)<<endl;
	cout<<"sum of two numbers"<<d1.sum(12,21,1);
}