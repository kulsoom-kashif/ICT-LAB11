#include <iostream>
#include <string.h>
using namespace std;
class parent{
	public:
		virtual void introduce()
		{
			cout<<"I am parent class";
		}
};
class child : public parent{
	public:
		void introduce()
		{
			cout<<"I am child class";
		}
};
int main(){
	parent *p1;
	child c1;
	p1=&c1;
	p1->introduce();
	
}