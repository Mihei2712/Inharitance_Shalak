#include"Human.h"
#include"Graduate.h"


const string& Graduate::get_diploma_theme() const
{
	return this->diploma_theme;
}
const string& Graduate::set_diploma_theme(const string& diploma_theme)
{
	return this->diploma_theme = diploma_theme;
}
//			Constructors:
Graduate::Graduate(const string& name, unsigned int age, const string& specialty, unsigned int year, int karma, const string& diploma_theme) :Student(name, age, specialty, year, karma)
{
	this->diploma_theme = diploma_theme;
	cout << "GConstructor:\t" << this << endl;
}
Graduate::~Graduate()
{
	cout << "Gdestructor:\t" << this << endl;
}
void Graduate::info()
{
	Student::info();
	cout << "���� ���������� �������: " << diploma_theme << endl;
}

ostream & operator<<(ostream & os, const Graduate & obj)
{
	// TODO: insert return statement here
	return os << " ������������� " << obj.get_specialty() << "%" << "���� ��������� ������ " << obj.get_diploma_theme() << endl;
}