#include<iostream>
#include<string>
using namespace std;
class Student {
private:
	string name;
	string address;
	int age;
    int diem;
	public:
		Student() {
	  
	}

	Student( string  name,const string address,int age,int diem) {
		this->name = name;
		this->address = address;
		this->age = age;
		this->diem = diem;

	}
	void setName(string );
	void setAddress(string);
	void setAge(int);
	void setDiem(int);
	string getName();
	string getAddress();
	int getAge();
	int getDiem();

	
	void ShowInfo() {
		cout << "===============Sinh Vien===============" << endl;
		cout << "Ten:" << name << endl;
		cout << "Dia chi:" << address << endl;
		cout << "Tuoi:" << age << endl;
		cout << "diem:" << diem << endl;
		cout << "=======================================" << endl;

	}
};
void Student::setName(string name) {
	this->name = name;
}
void Student::setAddress(string address){
	this->address = address;
}
void Student::setAge(int age) {
	this->age = age;

}
void Student::setDiem(int diem) {
	this->diem = diem;
}
string Student::getName(){
	return  name;
}
string Student::getAddress(){
	return this->address;
}
int Student::getAge(){
	return this->age;
}
int Student::getDiem() {
	return diem;

}
int main() {
	Student tuan("to vinh tuan", "thanh hoa", 10, 10);
	tuan.ShowInfo();
	
	Student s;
	s.setName("to vinh tuan");
	s.setAddress("Ha noi");
	s.setAge(5);
	s.setDiem(7);
	s.ShowInfo();
	return 0;
}