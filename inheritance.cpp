#include <iostream>
using namespace std;
class person{
	private:
		char name[20];
		int age;
		char caste[20];
	public:
		void setdata(const char name[],int age , const char caste[] ){
			strcpy(this->name,name);
			this->age = age;
			strcpy(this->caste,caste);
		}
		void display()
		{
			cout<<"Name is"<<name<<endl;
			cout<<"age is "<<age<<endl;
			cout<<"caste is "<<caste<<endl;
		}
};
class student : public person {
	private:
		int rollno;
		char department[20];
		public:
			void setdata_student(int rollno, const char department[] ){               
			this->rollno = rollno;
			strcpy(this->department, department);
		}
		void displaydata_student(){
			cout<<"rollno "<<rollno<<endl;
			cout<<"department "<<department<<endl;
		}
};
int main(){
	student s1;
	s1.setdata("kulsoom",19,"jutt");
	s1.display();
	s1.setdata_student(12,"bse");
	s1.displaydata_student();
}



