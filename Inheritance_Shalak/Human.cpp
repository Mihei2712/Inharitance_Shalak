#include"Human.h"

const string& Human::get_name()const
{
	return this->name;
}
unsigned int Human::get_age()const
{
	return this->age;
}
void Human::set_name(string& name)
{
	this->name = name;
}
void Human::set_age(unsigned int age)
{
	this->age = age;
}
Human::Human(string name, unsigned int age) :name(name), age(age)
{
	cout << "HConstructor:\t" << this << endl;
}
Human::~Human()
{
	cout << "HDestructor:\t" << this << endl;
}

//		Methods
void Human::info()
{
	cout << name << " " << age << " ���\n";
}

ostream & operator<<(ostream & os, Human & obj)
{
	// TODO: insert return statement here
	return os << obj.get_name() << "" << obj.get_age() << "���.";
}